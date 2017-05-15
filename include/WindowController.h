//
// Created by youhei on 17/05/13.
//

#ifndef TERMINALRPG_WINDOWCONTROLLER_H
#define TERMINALRPG_WINDOWCONTROLLER_H

#include "Window.h"

typedef enum {
  MENU_WIN,
  MAP_WIN,
  BATTLE_WIN,
} WIN_ID;

class WindowController {
 public:
  WindowController();
  ~WindowController ();
  Window *current;
  void draw();

 private:
  std::vector<Window*> list;

};

#endif //TERMINALRPG_WINDOWCONTROLLER_H
