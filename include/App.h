//
// Created by youhei on 17/05/13.
//

#ifndef TERMINALRPG_APP_H
#define TERMINALRPG_APP_H

#include "WindowController.h"
class App {


 public:
  App();
  ~App();

  void exec ();

 private:
  WindowController *winCon;
  void * exit ();
};

#endif //TERMINALRPG_APP_H
