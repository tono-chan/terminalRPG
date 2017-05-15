//
// Created by youhei on 17/05/14.
//

#include <iostream>
#include <StartScene.h>
#include <ncurses.h>
#include "KeyboardManager.h"
#include "MapScene.h"
#include "MenuScene.h"
#include "EventScene.h"
#include "KeyDefine.h"
#include "SceneMgr.h"
void SceneMgr::initialize ()
{
  Task::initialize ();
  KeyboardManager::Instance ()->key_push_signal.connect (boost::bind( &SceneMgr::key_handle , this , _1 ));
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
  scene->update ();
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
  else if (SceneID::MENU == id)
    {
      scene = new MenuScene();
    }
  else if (SceneID::EVENT == id)
    {
      scene = new EventScene();
    }
  else if (SceneID::DEBUG == id)
    {
      scene = new StartScene();
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

void SceneMgr::key_handle (int key)
{
  if ( key == RPG_KEY::ESC )
    {
      change_scene_handler (SceneID::DEBUG);
    }
}

