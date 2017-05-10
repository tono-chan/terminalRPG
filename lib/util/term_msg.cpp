//
// Created by youhei on 17/05/09.
//

#include <iostream>
#include "term_msg.h"
#include <sstream>
#include <iomanip>
#include <thread>

bool term_msg::flash ()
{
  std::cout << msg_ << std::endl;

//    if (msg_.length();
//    )

  return true;
}

term_msg::term_msg (int height, int width)
{

}

term_msg::term_msg (int height, int width, std::string msg)
{
  height_ = height;
  width_ = width;
  msg_ = msg;

}

void term_msg::up (int up_count)
{
  fprintf(stderr,"\0x1b[%dA",up_count);
}

void term_msg::down (int down_count)
{
  printf("\0x1b[%dB",down_count);
}

void term_msg::clear_line ()
{
  std::cout << "\r\0x1b[94m";
}

void term_msg::sleep (int ms)
{
  std::this_thread::sleep_for (std::chrono::milliseconds (ms));
}

void term_msg::progress_bar ()
{
  int i = 0;
  for (i; i < 10; i++)
    {
      clear_line ();
      std::cout << i;
      fflush (stdout);
      sleep (100);
    }
  clear_line ();
  std::cout << "clear!!" << std::endl;
}

void clrscr ()
{
  system ("clear");
}

bool term_msg::shake ()
{

  printf ("hello");

  clrscr ();

  printf ("world");

  return false;
}
