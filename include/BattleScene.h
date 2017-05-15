//
// Created by youhei on 17/05/14.
//

#ifndef TERMINALRPG_BATTLESCENE_H
#define TERMINALRPG_BATTLESCENE_H

#include "BaseScene.h"
class BattleScene : public BaseScene {

 public:
  BattleScene();
  void initialize() override ;
  void finalize() override ;
  void update() override;
  void draw() override ;
};

#endif //TERMINALRPG_BATTLESCENE_H
