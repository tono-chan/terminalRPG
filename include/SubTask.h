//
// Created by youhei on 17/05/15.
//

#ifndef TERMINALRPG_SUBSCENE_H
#define TERMINALRPG_SUBSCENE_H

#include "BaseScene.h"
class SubTask : public BaseScene {
 public:
  boost::signals2::signal<void(void)> deactivate_signal;
  boost::signals2::signal<void(void)> activate_signal;
  boost::signals2::signal<void(SubTask*)> delete_signal;
  void initialize() override ;
  void finalize() override ;
  void update() override;
  void draw() override ;
  void activate();
  ~SubTask ();

 private:
  int key_;
  boost::signals2::connection keyConnect;
  void key_handle (int key);
};

#endif //TERMINALRPG_SUBSCENE_H
