//
// Created by youhei on 17/05/12.
//

#ifndef TERMINALRPG_MAPMODEL_H
#define TERMINALRPG_MAPMODEL_H

#include <vector>
#include "MapObject.h"



class MapModel {
 public:
  MapModel ();
  bool load_map(std::vector<std::vector<int>>* map_data);
  bool add (MapObject *object);
  bool can_put(int y, int x);
  std::vector<MapObject*> get(int y, int x);
  unsigned long list_size ();
  int width();
  int height();
  int focus_x ();
  int focus_y ();
  const std::vector<std::vector<int>>& map_data();
  const std::vector<MapObject*> object_list();


  static const int PLAYER_ID = 0;
  bool load_map ();
 private:
  int width_;
  int height_;
  int focus_x_;

  int focus_y_;
  std::vector<MapObject*> object_list_;
  std::vector<std::vector<int>> map_data_;

  /**
   * x,y 座標がマップの範囲内か
   * @param y
   * @param x
   * @return
   */
  bool is_map_range (int y, int x);


};

#endif //TERMINALRPG_MAPMODEL_H
