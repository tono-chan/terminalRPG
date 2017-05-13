//
// Created by youhei on 17/05/13.
//

#ifndef TERMINALRPG_MAPCONTROLLER_H
#define TERMINALRPG_MAPCONTROLLER_H

#include "MapWindow.h"
#include "MapModel.h"
class MapController {
 public:
  MapController();
  ~MapController ();
  void exec ();
 private:
  int key;
  MapModel *mapModel;
  MapWindow *mapWindow;
  void keyevent_handler ();
};

#endif //TERMINALRPG_MAPCONTROLLER_H
