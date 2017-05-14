//
// Created by youhei on 17/05/14.
//

#ifndef TERMINALRPG_CONTROLLERMANAGER_H
#define TERMINALRPG_CONTROLLERMANAGER_H

#include "Controller.h"
class ControllerManager : public Controller {
 public:
  ControllerManager();
  void exec();
 private:
  Controller *current;
  void change_controller_handler(ControllerID controllerID);




};

#endif //TERMINALRPG_CONTROLLERMANAGER_H
