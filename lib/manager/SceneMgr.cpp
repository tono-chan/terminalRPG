//
// Created by youhei on 17/05/14.
//

#include <iostream>
#include <StartScene.h>
#include <ncurses.h>
#include <MapScene.h>
#include "SceneMgr.h"
void SceneMgr::initialize ()
{
  Task::initialize ();
  scene->initialize ();

}
void SceneMgr::finalize ()
{
  Task::finalize ();
//  scene->finalize ();
}
void SceneMgr::update ()
{
//  std::cout << "update" ;
//  scene->update ();
}
void SceneMgr::draw ()
{
//  std::cout << "draw" << std::endl;
  scene->draw ();
}

void SceneMgr::set_scene (SceneID id)
{
  if (SceneID::START == id)
    {
      scene = new StartScene();
    }
  else if (SceneID::BATTLE == id)
    {
      scene = new BattleScene();
    }
  else if (SceneID::MAP == id)
    {
      scene = new MapScene();
    }

  scene->change_scene_event.connect (boost::bind(&SceneMgr::change_scene_handler, this, _1 ));
}

void SceneMgr::change_scene_handler(SceneID id) {
  change_scene_con.disconnect ();
  scene->finalize ();
  delete scene;
  set_scene (id);
  scene->initialize ();
}

SceneMgr::SceneMgr (SceneID id)
{
  set_scene (id);
}

