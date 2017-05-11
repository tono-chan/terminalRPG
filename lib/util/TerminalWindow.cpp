//
// Created by youhei on 17/05/09.
//

#include "TerminalWindow.h"

#include <sys/ioctl.h>
#include <unistd.h>

TerminalWindow::TerminalWindow ()
{
  struct winsize winsz;
  if (ioctl (STDOUT_FILENO, TIOCGWINSZ, &winsz) != -1)
    {
      width_ = winsz.ws_col;
      height_ = winsz.ws_row;
    }
}

int TerminalWindow::width ()
{
  return width_;
}

int TerminalWindow::height ()
{
  return height_;
}
