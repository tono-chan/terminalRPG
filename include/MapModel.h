//
// Created by youhei on 17/05/12.
//

#ifndef TERMINALRPG_MAPMODEL_H
#define TERMINALRPG_MAPMODEL_H

#include <vector>
#include "MapObject.h"

class MapModel {
 public:
  MapModel();
 private:
  int width_;
  int height_;
  std::vector<MapObject> objectList_;
  std::vector<std::vector<int>> mapData_;

};

#endif //TERMINALRPG_MAPMODEL_H
