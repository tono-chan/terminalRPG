//
// Created by youhei on 17/05/13.
//

#ifndef TERMINALRPG_MAPCONTROLLER_H
#define TERMINALRPG_MAPCONTROLLER_H

#include "MapWindow.h"
#include "MapModel.h"
#include "Controller.h"
enum struct MapEvent : int  {
  ENCOUNT,
  MAP_CHANGE,
};


class MapController : public Controller  {
 public:
  MapController();
  ~MapController ();
  void exec ();


 private:
  int key;
  bool draw;
  MapModel *mapModel;
  MapWindow *mapWindow;
  void keyevent_handler ();
};

#endif //TERMINALRPG_MAPCONTROLLER_H
