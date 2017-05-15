//
// Created by youhei on 17/05/15.
//

#include <boost/date_time/posix_time/posix_time.hpp>
#include "Fps.h"
#include <ncurses.h>
#include <thread>
#include <sstream>

void Fps::update ()
{
  if (count_ == 0 )
    {
      start_time = boost::posix_time::microsec_clock::local_time ();
    }
  if (count_ == fps_)
    {
      mst2_ = boost::posix_time::microsec_clock::local_time ();
      boost::posix_time::time_duration took_time = mst2_ - start_time;
      real_fps_ = 1000 * (double) count_ / took_time.total_milliseconds();
      count_ = 0;
      start_time = mst2_;
    }
  count_++;
}
void Fps::draw ()
{

  int y;
  int x;
  getmaxyx(stdscr,y,x);

  std::stringstream ss;
  ss << "frame:" << std::setw(2) << count_ << "," << "fps:" << std::setw(2) << (int)real_fps_;

  int width = (int) ss.str ().length ();
  move(y - 1,x - width );
  {
    addstr(ss.str ().c_str ());
  }
  refresh ();
}
void Fps::wait ()
{
  long wait_time;
  boost::posix_time::time_duration took_time =
      boost::posix_time::microsec_clock::local_time () - start_time;
  wait_time = (long) (count_ * frame_time_ - took_time.total_milliseconds ());
  if (wait_time > 0)
    {
      std::this_thread::sleep_for (std::chrono::milliseconds (wait_time));
    }
}
Fps::Fps (int fps)
{
  fps_ = fps;
  frame_time_ = 1000/fps;
  real_fps_ = 0;
  count_ = 0;
}
