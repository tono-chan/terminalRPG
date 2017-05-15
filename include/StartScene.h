//
// Created by youhei on 17/05/15.
//

#ifndef TERMINALRPG_STARTSCENE_H
#define TERMINALRPG_STARTSCENE_H

#include "BaseScene.h"
class StartScene : public BaseScene {
 public:
  StartScene();
  void initialize() override ;
  void finalize() override ;
  void update() override;
  void draw() override ;

 private:
  int select_menu;
  boost::signals2::connection keyConnect;
  void key_handle (int key);
  std::vector<std::string> menu;
};

#endif //TERMINALRPG_STARTSCENE_H
