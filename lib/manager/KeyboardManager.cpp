//
// Created by youhei on 17/05/14.
//

#include <exception>
#include <iostream>
#include <thread>
#include <boost/thread/thread.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <ncurses.h>
#include "KeyboardManager.h"

int KeyboardManager::getKey ()
{
  return key;
}

void KeyboardManager::start_watch (int fps)
{
  th = boost::thread (boost::bind (&KeyboardManager::work, this, fps));
}

void KeyboardManager::exit_watch ()
{
  is_continue = false;
  th.interrupt ();
}

void KeyboardManager::work (int fps)
{
  boost::posix_time::ptime mst1;
  boost::posix_time::ptime mst2;
  long frame_time = 1000 / fps;
  long wait_time;
  while (is_continue)
    {
      mst1 = boost::posix_time::microsec_clock::local_time ();
      key = getch ();
      if (key != ERR)
        {
          key_push_signal (key);
        }
      mst2 = boost::posix_time::microsec_clock::local_time ();
      boost::posix_time::time_duration took_time = mst2 - mst1;
      wait_time = frame_time - took_time.total_milliseconds ();
      if (wait_time > 0)
        {
          std::this_thread::sleep_for (std::chrono::milliseconds (wait_time));
        }
    }
  std::cout << "end";
}

KeyboardManager::KeyboardManager ()
{
  is_continue = true;
}

