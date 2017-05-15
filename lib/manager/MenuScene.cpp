//
// Created by youhei on 17/05/15.
//

#include <ncurses.h>
#include "MenuScene.h"
MenuScene::MenuScene ()
{

}
void MenuScene::initialize ()
{
  BaseScene::initialize ();
}
void MenuScene::finalize ()
{
  BaseScene::finalize ();
}
void MenuScene::update ()
{
  BaseScene::update ();
}
void MenuScene::draw ()
{
  BaseScene::draw ();
  clear();
  addstr("menu scene");
  wnoutrefresh(stdscr);
}
