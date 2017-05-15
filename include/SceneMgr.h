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


 public:
  SceneMgr(SceneID);
  void initialize() override ;
  void finalize() override ;
  void update() override ;
  void draw() override ;

 private:
  SceneID next_scene_no;
  BaseScene *scene;
  void set_scene (SceneID);
  void change_scene_handler (SceneID id);
  boost::signals2::connection change_scene_con;
  void key_handle(int key);
};

#endif //TERMINALRPG_CONTROLLER_H
