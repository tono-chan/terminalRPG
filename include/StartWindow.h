//
// Created by youhei on 17/05/13.
//

#ifndef TERMINALRPG_MENUWINDOW_H
#define TERMINALRPG_MENUWINDOW_H

#include "Window.h"
#include <ncurses.h>
class StartWindow : public Window {
 private:
  WINDOW *window_;

 public:
  StartWindow();
  void draw();
  boost::signals2::signal<void(void)> start_select;
  boost::signals2::signal<void(void)> load_select;


};

#endif //TERMINALRPG_MENUWINDOW_H
