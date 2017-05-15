//
// Created by youhei on 17/05/15.
//

#include <iostream>
#include <boost/signals2/signal.hpp>
#include <ncurses.h>
#include "KeyboardManager.h"
#include "StartScene.h"

void StartScene::key_handle (int key)
{
  if (key == KEY_UP) {
      select_menu = (int) ((select_menu + menu.size() - 1 ) % menu.size ());
    }
  if (key == KEY_DOWN) {
      select_menu = (int) ((select_menu + 1) % menu.size ());
    }
  if (key == ENTER) {
      switch (select_menu) {
          case 0:
            change_scene_event(SceneID::MAP);
          break;
          case 1:
            change_scene_event(SceneID::BATTLE);
          break;
          case 2:
            change_scene_event(SceneID::SHOP);
          break;
        }
    }
}

StartScene::StartScene ()
{

}
void StartScene::initialize ()
{
  BaseScene::initialize ();
  std::cout << "start_scene start";
  keyConnect = KeyboardManager::Instance ()->key_push_signal.connect (
      boost::bind (&StartScene::key_handle, this,_1)
  );

  menu.push_back("start");
  menu.push_back("battle");
  menu.push_back("menu");

}
void StartScene::finalize ()
{
  BaseScene::finalize ();
  keyConnect.disconnect ();
}
void StartScene::update ()
{
  BaseScene::update ();
}
void StartScene::draw ()
{
  clear();
  BaseScene::draw ();
  addstr("StartScene");
  for ( int i = 0 ; i < menu.size (); i++)
    {
      move( i + 1 , 1 );
      addstr ( menu[i].c_str ());
    }
  move(select_menu + 1, 0 );
  addstr("*");
  refresh ();
}
