//
// Created by youhei on 17/05/11.
//

#include <ncurses.h>
#include <stdlib.h>
#include <BattleWindow.h>
#include <CommandMenu.h>
#include <iostream>

int main ()
{
  setlocale (LC_ALL, "");

  initscr();
  cbreak();
  noecho();
  erase();
  refresh ();

  std::vector<std::string> command;
  command.push_back ("move");
  command.push_back ("action");
  command.push_back ("wait");
  command.push_back ("status");
  command.push_back ("オートバトル");
  CommandMenu commandMenu(command, 10, 10);
  int select = commandMenu.select ();
  endwin();

  std::cout << select << std::endl;


}