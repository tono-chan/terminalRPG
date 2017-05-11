//
// Created by youhei on 17/05/11.
//

#include "BattleWindow.h"
#include <string>
#include <ncurses.h>

using namespace std;

BattleWindow::BattleWindow ()
{
  int height;
  int width;
  getmaxyx(stdscr, height, width);
  window_ = newwin (height, width, 0, 0);
  wmove (window_, 0, 0);
  wclear (window_);
  waddstr (window_, " window ");
  wrefresh (window_);
}

BattleWindow::~BattleWindow ()
{
  delwin (window_);
}

void BattleWindow::command ()
{
  string attack = "attack";
  string magic = "magic";

  WINDOW *command = newwin (10, 10, 10, 10);

  wmove (command, 0, 1);
  waddstr(command, attack.c_str ());
  wmove (command, 1, 1);
  waddstr(command, magic.c_str ());
  wrefresh (command);

  keypad (command, true);

  int key;
  int y = 0;
  int listsize = 2;

  while (1)
    {
      wdelch(command);
      winsch(command, ' ');
      mvwdelch (command, y , 0);
      winsch(command, '*');
      wrefresh (command);

      key = wgetch (command);
      if (key == 10) break;

      switch (key)
        {
          case KEY_UP:if (0 < y) y--;
          break;
          case KEY_DOWN: if ( y + 1 < listsize ) y++;
          break;
        }

    }
  delwin (command);
  wmove(window_, 5,5);
  string msg="you are select" + std::to_string(y);
  waddstr (window_, msg.c_str ());
  wrefresh (window_);

}


