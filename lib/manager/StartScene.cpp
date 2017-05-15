//
// Created by youhei on 17/05/15.
//

#include <iostream>
#include "StartScene.h"
StartScene::StartScene ()
{

}
void StartScene::initialize ()
{
  BaseScene::initialize ();
  std::cout << "map_scene start";

}
void StartScene::finalize ()
{
  BaseScene::finalize ();
}
void StartScene::update ()
{
  BaseScene::update ();
}
void StartScene::draw ()
{
  BaseScene::draw ();
}
