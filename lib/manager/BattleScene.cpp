//
// Created by youhei on 17/05/14.
//

#include <iostream>
#include <ncurses.h>
#include "BattleScene.h"

BattleScene::BattleScene ()
{

}
void BattleScene::initialize ()
{
  BaseScene::initialize ();
}
void BattleScene::finalize ()
{
  BaseScene::finalize ();
}
void BattleScene::update ()
{
  BaseScene::update ();
}
void BattleScene::draw ()
{
  BaseScene::draw ();
  clear();
  addstr ("battlescene");
  wnoutrefresh (stdscr);
}
