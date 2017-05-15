//
// Created by youhei on 17/05/14.
//

#ifndef TERMINALRPG_CONTROLLER_H
#define TERMINALRPG_CONTROLLER_H

#include "Task.h"
#include "SceneList.h"
#include "BaseScene.h"
#include "BattleScene.h"

class SceneMgr : public Task  {

 private:
  SceneID next_scene_no;
  BaseScene *scene;
 public:
  SceneMgr(SceneID);
  void initialize() override ;
  void finalize() override ;
  void update() override ;
  void draw() override ;

  void set_scene (SceneID);
};

#endif //TERMINALRPG_CONTROLLER_H
