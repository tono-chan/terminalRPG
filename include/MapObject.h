//
// Created by youhei on 17/05/12.
//

#ifndef TERMINALRPG_OBJECT_H
#define TERMINALRPG_OBJECT_H
#include <ncurses.h>
#include <string>
#include "Point.h"
enum struct ObjectType : int {
  PLAYER,
  ENEMY,
  HUMAN,
  ITEM,
  TRAP,

};

/**
 * MapObject マップに配置された物体の情報
 *
 */

class MapObject {
 public:
  MapObject( int y , int x , int type);

  int x();
  int y();
  void up();
  void down();
  void left();
  void right();
  Point point();
  int type();
  std::string graphics();

 private:
  int type_;
  bool visible_;
  bool allow_overlaid_;
  bool Investigate_;
  int x_;
  int y_;
};

#endif //TERMINALRPG_OBJECT_H
