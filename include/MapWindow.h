//
// Created by youhei on 17/05/13.
//

#ifndef TERMINALRPG_MAPWINDOW_H
#define TERMINALRPG_MAPWINDOW_H

#include <ncurses.h>
#include "Window.h"
#include "MapModel.h"
class MapWindow : public Window {
 public:
  MapWindow (MapModel *mapmodel);
  void draw (int y, int x);
 private:
  MapModel *model_;
  WINDOW *mapOut;
  WINDOW *mapFrame;
  WINDOW *map;
  int map_w_;
  int map_h_;
  void setPixel (WINDOW *window ,int index );
  void setPixel (int index);
};

#endif //TERMINALRPG_MAPWINDOW_H
