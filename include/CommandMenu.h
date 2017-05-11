//
// Created by youhei on 17/05/11.
//

#ifndef TERMINALRPG_COMMANDMENU_H
#define TERMINALRPG_COMMANDMENU_H

#include <curses.h>
#include <vector>
#include <string>

class CommandMenu {

 public:
  CommandMenu (const std::vector<std::string> &list, int y, int x);
  ~CommandMenu ();
  int select();
 private:
  const std::vector<std::string> list_;
  WINDOW *window_;

};

#endif //TERMINALRPG_COMMANDMENU_H
