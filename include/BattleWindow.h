//
// Created by youhei on 17/05/11.
//

#ifndef TERMINALRPG_BATTLE_H
#define TERMINALRPG_BATTLE_H
#include <ncurses.h>

class BattleWindow {

 public:
  BattleWindow();
  ~BattleWindow();

  int command();
 private:
  WINDOW *window_;


};

#endif //TERMINALRPG_BATTLE_H
