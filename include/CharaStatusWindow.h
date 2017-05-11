//
// Created by youhei on 17/05/12.
//

#ifndef TERMINALRPG_CHARASTATUSWINDOW_H
#define TERMINALRPG_CHARASTATUSWINDOW_H

#include <ncurses.h>
#include "Chara.h"
/*
 * character-------------------------|
 * |Lv:xx , Exp xx , status xxxx     |
 * |HP:==================== 1111/1111|
 * |MP:==================== 1111/1111|
 * |----------------------------------
 */

class CharaStatusWindow {
 public:
  CharaStatusWindow(const Chara *chara,  int y ,int x);
  ~CharaStatusWindow ();
  void draw ();
 private:
  WINDOW *window_;
  const Chara *chara_;
  int bar_length_ = 20;
  int left_mergin = 1;

};

#endif //TERMINALRPG_CHARASTATUSWINDOW_H
