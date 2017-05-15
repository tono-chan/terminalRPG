//
// Created by youhei on 17/05/14.
//

#include <iostream>
#include <StartScene.h>
#include "SceneMgr.h"
void SceneMgr::initialize ()
{
  Task::initialize ();
//  scene->initialize ();
}
void SceneMgr::finalize ()
{
  Task::finalize ();
//  scene->finalize ();
}
void SceneMgr::update ()
{
  std::cout << "update" ;
//  scene->update ();
}
void SceneMgr::draw ()
{
  std::cout << "draw" << std::endl;
//  scene->draw ();
}

void SceneMgr::set_scene (SceneID id)
{
  if (SceneID::START == id)
    {
      scene = new StartScene();
    }
  if (SceneID::BATTLE == id)
    {
      scene = new BattleScene();
    }

}

SceneMgr::SceneMgr (SceneID id)
{
  set_scene (id);
}
