//
// Created by youhei on 17/05/15.
//

#include <iostream>
#include <boost/signals2/signal.hpp>
#include <ncurses.h>
#include <SubTask.h>
#include "KeyboardManager.h"
#include "StartScene.h"

void StartScene::key_handle (int key)
{
  if (key == KEY_UP)
    {
      select_menu = (int) ((select_menu + menu.size () - 1) % menu.size ());
    }
  if (key == KEY_DOWN)
    {
      select_menu = (int) ((select_menu + 1) % menu.size ());
    }
  if (key == ENTER)
    {
      switch (select_menu)
        {
          case 0:change_scene_event (SceneID::MAP);
          break;
          case 1:change_scene_event (SceneID::BATTLE);
          break;
          case 2:change_scene_event (SceneID::SHOP);
          break;
          case 3:keyConnect.disconnect ();
          SubTask *sub = new SubTask;
          sub->activate ();
          sub->deactivate_signal.connect (boost::bind( &StartScene::activate, this ));
          sub->delete_signal.connect (boost::bind (&StartScene::delete_sub_task, this, _1));
          subscene.push_back (sub);
          break;
        }
    }
}

void StartScene::delete_sub_task (SubTask *sub)
{
  delete sub;
  subscene.remove (sub);
}

StartScene::StartScene ()
{

}
void StartScene::initialize ()
{
  BaseScene::initialize ();
  std::cout << "start_scene start";
  activate ();

  menu.push_back ("start");
  menu.push_back ("battle");
  menu.push_back ("menu");
  menu.push_back ("sub_scene");
}
void StartScene::finalize ()
{
  BaseScene::finalize ();
  keyConnect.disconnect ();
}
void StartScene::update ()
{
  BaseScene::update ();
  for (auto itr = subscene.begin (); itr != subscene.end (); ++itr)
    {
      SubTask *task = (SubTask *) *itr;
      task->update ();
    }

}
void StartScene::draw ()
{
  clear ();
  BaseScene::draw ();
  addstr("StartScene");
  for (int i = 0; i < menu.size (); i++)
    {
      move (i + 1, 1);
      addstr (menu[i].c_str ());
    }
  move (select_menu + 1, 0);
  addstr("*");

  for (auto itr = subscene.begin (); itr != subscene.end (); ++itr)
    {
      SubTask *task = (SubTask *) *itr;
      task->draw ();
    }

  refresh ();
}

