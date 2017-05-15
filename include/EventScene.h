//
// Created by youhei on 17/05/15.
//

#ifndef TERMINALRPG_EVENTSCENE_H
#define TERMINALRPG_EVENTSCENE_H

#include "BaseScene.h"
class EventScene : BaseScene {
  EventScene ();
  void initialize () override;
  void finalize () override;
  void update () override;
  void draw () override;


};

#endif //TERMINALRPG_EVENTSCENE_H
