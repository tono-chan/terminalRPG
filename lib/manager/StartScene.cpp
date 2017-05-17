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
      switch (menu[select_menu].type ())
        {
//
//      if (CommandType::ChangeMapScene == menu[select_menu].type ())
//        { change_scene_event (SceneID::MAP); }
//
//      else if (CommandType::ChangeBattleScene == menu[select_menu].type ())
//        { change_scene_event (SceneID::BATTLE); };

          case CommandType::ChangeMapScene: change_scene_event (SceneID::MAP);
          break;
          case CommandType::ChangeBattleScene: change_scene_event (SceneID::BATTLE);
          break;
          case CommandType::ChangeMenuScene :change_scene_event (SceneID::MENU);
          break;
          case CommandType::ChangeEventScene :change_scene_event (SceneID::EVENT);
          break;
          case CommandType::SubScene :keyConnect.disconnect ();
          SubTask *sub = new SubTask;
          sub->activate ();
          sub->deactivate_signal.connect (boost::bind (&StartScene::activate, this));
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
  activate ();

  menu.push_back (Command (CommandType::ChangeMapScene));
  menu.push_back (Command (CommandType::ChangeBattleScene));
  menu.push_back (Command (CommandType::ChangeEventScene));
  menu.push_back (Command (CommandType::ChangeShopScene));
  menu.push_back (Command (CommandType::SubScene));
}
void StartScene::finalize ()
{
  BaseScene::finalize ();
  std::for_each (subscene.begin (), subscene.end (), [] (SubTask *p)
  { delete p; });
//  subscene.clear();
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
      addstr (menu[i].name ().c_str ());
    }
  move (select_menu + 1, 0);
  addstr("*");

  for (auto itr = subscene.begin (); itr != subscene.end (); ++itr)
    {
      SubTask *task = (SubTask *) *itr;
      task->draw ();
    }

  wnoutrefresh (stdscr);
}

