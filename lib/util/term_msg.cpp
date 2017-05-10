//
// Created by youhei on 17/05/09.
//

#include <iostream>
#include "term_msg.h"

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
