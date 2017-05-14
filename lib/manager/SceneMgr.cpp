//
// Created by youhei on 17/05/14.
//

#include "SceneMgr.h"
void SceneMgr::initialize ()
{
  Task::initialize ();
  scene->initialize ();
}
void SceneMgr::finalize ()
{
  Task::finalize ();
  scene->finalize ();
}
void SceneMgr::update ()
{

  scene->update ();

}
void SceneMgr::draw ()
{
  scene->draw ();
}
