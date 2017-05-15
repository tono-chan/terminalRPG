//
// Created by youhei on 17/05/14.
//

#ifndef TERMINALRPG_BASESCENE_H
#define TERMINALRPG_BASESCENE_H

#include <boost/signals2/signal.hpp>
#include "Task.h"
#include "SceneList.h"

class BaseScene : public Task {
 public:
  BaseScene(){};
  boost::signals2::signal<void (SceneID) > change_scene_event;
  virtual ~BaseScene (){};
  virtual void initialize() override {};
  virtual void finalize() override{};
  virtual void update() override{};
  virtual void draw() override {}

 protected:
  void activate ();
  virtual void key_handle (int key){};
  boost::signals2::connection keyConnect;


};

#endif //TERMINALRPG_BASESCENE_H
