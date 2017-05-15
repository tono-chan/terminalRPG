//
// Created by youhei on 17/05/13.
//

#include "App.h"
#include <stdlib.h>
#include <ncurses.h>

void App::exec ()
{
  conMgr = new ControllerManager();
  conMgr->exec();
//
//  winCon = new WindowController;
//  winCon->draw();

}
App::App ()
{
  initscr();
  cbreak();
  noecho();
  timeout(1000/60);
  erase();
  refresh ();
}


App::~App ()
{
  delete winCon;
  endwin ();
}
