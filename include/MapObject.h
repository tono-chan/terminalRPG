//
// Created by youhei on 17/05/12.
//

#ifndef TERMINALRPG_OBJECT_H
#define TERMINALRPG_OBJECT_H

enum ObjectType : int {
  HUMAN,
  ITEM,
  TRAP,

};

/**
 * MapObject マップに配置された物体の情報
 *
 */

class MapObject {
 private:
  int type_;
  bool visible_;
  bool allow_overlaid_;
  bool Investigate_;
  int x_;
  int y_;
};

#endif //TERMINALRPG_OBJECT_H
