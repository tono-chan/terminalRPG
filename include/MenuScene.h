//
// Created by youhei on 17/05/15.
//

#ifndef TERMINALRPG_MENUSCENE_H
#define TERMINALRPG_MENUSCENE_H

#include "BaseScene.h"
class MenuScene : public BaseScene {
 public:
  MenuScene ();
  void initialize () override;
  void finalize () override;
  void update () override;
  void draw () override;

};

#endif //TERMINALRPG_MENUSCENE_H
