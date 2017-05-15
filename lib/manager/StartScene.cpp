//
// Created by youhei on 17/05/15.
//

#include <iostream>
#include <boost/signals2/signal.hpp>
#include "KeyboardManager.h"
#include "StartScene.h"

void key_handle (int key)
{
  std::cout << key << std::endl;
}

StartScene::StartScene ()
{

}
void StartScene::initialize ()
{
  BaseScene::initialize ();
  std::cout << "start_scene start";
  KeyboardManager::Instance ()->key_push_signal.connect (
      boost::bind (key_handle, _1)
  );

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
