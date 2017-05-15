//
// Created by youhei on 17/05/15.
//

#include <ncurses.h>
#include <StartScene.h>
#include "SubTask.h"
#include "KeyboardManager.h"
void SubTask::initialize ()
{
  BaseScene::initialize ();
}

void SubTask::finalize ()
{
  BaseScene::finalize ();

}

void SubTask::update ()
{
  BaseScene::update ();
}

void SubTask::draw ()
{
  BaseScene::draw ();
  move( 10 , 10);
  addstr("subtask:");
  addstr(std::to_string (key_).c_str ());
}

void SubTask::key_handle(int key) {
  key_ = key;
  if ( key == ENTER)
    {
      deactivate_signal();
      delete_signal(this);
      keyConnect.disconnect ();
    }
};

void SubTask::activate ()
{
  keyConnect = KeyboardManager::Instance()->key_push_signal.connect (boost::bind( &SubTask::key_handle ,this, _1));
}
SubTask::~SubTask ()
{
  keyConnect.disconnect ();
}

