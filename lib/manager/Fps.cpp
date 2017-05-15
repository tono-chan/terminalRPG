//
// Created by youhei on 17/05/15.
//

#include <boost/date_time/posix_time/posix_time.hpp>
#include "Fps.h"
#include <ncurses.h>
#include <thread>

void Fps::update ()
{
  if (count_ == 0 )
    {
      start_time = boost::posix_time::microsec_clock::local_time ();
    }
  if (count_ == fps_)
    {
      boost::posix_time::time_duration took_time = mst2_ - start_time;
      real_fps_ = 1000 * count_ / took_time.total_milliseconds();

      count_ = 0;
      start_time = mst2_;
    }
  count_++;
}
void Fps::draw ()
{
  move(10,10);
  addstr( std::to_string (real_fps_).c_str () );

}
void Fps::wait ()
{
  long wait_time;
  boost::posix_time::time_duration took_time =
      boost::posix_time::microsec_clock::local_time () - start_time;
  wait_time = (long) (frame_time_ - took_time.total_milliseconds ());
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
