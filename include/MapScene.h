//
// Created by youhei on 17/05/15.
//

#ifndef TERMINALRPG_MAPSCENE_H
#define TERMINALRPG_MAPSCENE_H

#include "BaseScene.h"
class MapScene :public BaseScene {
 public:
  MapScene ();
  void initialize () override;
  void finalize () override;
  void update () override;
  void draw () override;

};

#endif //TERMINALRPG_MAPSCENE_H
