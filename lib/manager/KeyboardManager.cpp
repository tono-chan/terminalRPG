//
// Created by youhei on 17/05/14.
//

#include <exception>
#include <iostream>
#include <thread>
#include <boost/thread/thread.hpp>
#include <caca_conio.h>
#include "KeyboardManager.h"
struct thread_aborted {};

int KeyboardManager::getKey ()
{
  return key;
}

void KeyboardManager::start_watch ()
{
  th = boost::thread (boost::bind (&KeyboardManager::work, this));
}

void KeyboardManager::exit_watch ()
{
  th.interrupt ();
}

void KeyboardManager::work ()
{
  int previous;
  while (true)
    {

      if (kbhit () )
        {
          key = getch ();
          previous = kbhit();
        } else
        {
          key = 0;
        }

      std::this_thread::sleep_for (std::chrono::milliseconds ( 100));

      //damy
      if (key == -1)
        {
          return;
        }
    }
}

KeyboardManager::KeyboardManager ()
{
  is_exit = false;
}

