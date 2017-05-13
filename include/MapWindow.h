//
// Created by youhei on 17/05/13.
//

#ifndef TERMINALRPG_MAPWINDOW_H
#define TERMINALRPG_MAPWINDOW_H

#include <ncurses.h>
#include "Window.h"
class MapWindow : public Window {

 public:
  WINDOW *window_;
  

 public:
  MapWindow();
  ~MapWindow();
  void draw();
  void setMap();

  void setMap (int map_height, int map_width, int *map_data);
};

#endif //TERMINALRPG_MAPWINDOW_H
