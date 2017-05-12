//
// Created by youhei on 17/05/12.
//

#ifndef TERMINALRPG_MAPMODEL_H
#define TERMINALRPG_MAPMODEL_H

#include <vector>
#include "MapObject.h"

class MapModel {
 public:
  MapModel( int height , int width);
  bool load_map(std::vector<std::vector<int>>* map_data);

  bool add (MapObject *object);
  unsigned long list_size ();
 private:
  int width_;
  int height_;
  std::vector<MapObject*> object_list_;
  std::vector<std::vector<int>> *map_data_;

};

#endif //TERMINALRPG_MAPMODEL_H
