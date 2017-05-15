//
// Created by youhei on 17/05/15.
//

#include <ncurses.h>
#include "MapScene.h"
MapScene::MapScene ()
{

}
void MapScene::initialize ()
{
  BaseScene::initialize ();
}
void MapScene::finalize ()
{
  BaseScene::finalize ();
}
void MapScene::update ()
{
  BaseScene::update ();
}
void MapScene::draw ()
{
  clear();
  BaseScene::draw ();
  move(0,0);
  addstr ("map scene");
}
