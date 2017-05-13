//
// Created by youhei on 17/05/13.
//

#include "App.h"
#include <stdlib.h>
#include <ncurses.h>

void App::exec ()
{
  winCon = new WindowController;
  winCon->draw();

}
App::App ()
{
  initscr();
  cbreak();
  noecho();
  erase();
  refresh ();
}


App::~App ()
{
  delete winCon;
  endwin ();
}
