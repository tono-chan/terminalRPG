//
// Created by youhei on 17/05/09.
//

#include "terminal_window.h"

#include <sys/ioctl.h>
#include <unistd.h>

terminal_window::terminal_window ()
{
  struct winsize winsz;
  if (ioctl (STDOUT_FILENO, TIOCGWINSZ, &winsz) != -1)
    {
      width_ = winsz.ws_col;
      height_ = winsz.ws_row;
    }
}

int terminal_window::width ()
{
  return width_;
}

int terminal_window::height ()
{
  return height_;
}
