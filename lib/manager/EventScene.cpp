//
// Created by youhei on 17/05/15.
//

#include <ncurses.h>
#include "EventScene.h"
EventScene::EventScene ()
{

}
void EventScene::initialize ()
{
  BaseScene::initialize ();
}
void EventScene::finalize ()
{
  BaseScene::finalize ();
}
void EventScene::update ()
{
  BaseScene::update ();
}
void EventScene::draw ()
{
  BaseScene::draw ();
  clear();
  move(0,0);
  addstr("Event Scene");
}
