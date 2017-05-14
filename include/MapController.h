//
// Created by youhei on 17/05/13.
//

#ifndef TERMINALRPG_MAPCONTROLLER_H
#define TERMINALRPG_MAPCONTROLLER_H

#include "MapWindow.h"
#include "MapModel.h"
enum struct MapEvent : int  {
  ENCOUNT,
  MAP_CHANGE,
};


class MapController {
 public:
  MapController();
  ~MapController ();
  void exec ();
  boost::signals2::signal<void( int )> encount_event;

 private:
  int key;
  bool draw;
  MapModel *mapModel;
  MapWindow *mapWindow;
  void keyevent_handler ();
};

#endif //TERMINALRPG_MAPCONTROLLER_H
