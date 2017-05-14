//
// Created by youhei on 17/05/14.
//

#ifndef TERMINALRPG_STARTCONTROLLER_H
#define TERMINALRPG_STARTCONTROLLER_H

#include "Controller.h"
class StartController : public Controller  {
 public:
  StartController();
  void exec();


  void start_select ();
  void load_select ();
};

#endif //TERMINALRPG_STARTCONTROLLER_H
