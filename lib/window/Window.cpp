//
// Created by youhei on 17/05/13.
//

#include "Window.h"
#include <ncurses.h>
void Window::draw ()
{

}
Window::Window ()
{
  getmaxyx(stdscr, h_, w_);

}
