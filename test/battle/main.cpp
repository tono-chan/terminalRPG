//
// Created by youhei on 17/05/11.
//

#include <ncurses.h>
#include <stdlib.h>
#include <BattleWindow.h>

int main ()
{
  initscr();
  cbreak();
  noecho();
  erase();
  refresh ();
  BattleWindow *battleWindow = new BattleWindow();
  battleWindow->command ();

  getchar();

  endwin();


}