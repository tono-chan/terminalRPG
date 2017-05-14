//
// Created by youhei on 17/05/14.
//

#ifndef TERMINALRPG_CONTROLLER_H
#define TERMINALRPG_CONTROLLER_H

#include <ControllerId.h>
#include <boost/signals2/signal.hpp>
class Controller {

 public:
  boost::signals2::signal<void (ControllerID) > change_controller;
  virtual void exec() = 0;

};

#endif //TERMINALRPG_CONTROLLER_H
