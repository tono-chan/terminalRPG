//
// Created by youhei on 17/05/14.
//

#include <StartWindow.h>
#include "StartController.h"
void StartController::exec ()
{
  StartWindow *startWindow = new StartWindow ();
  startWindow->start_select.connect (boost::bind (&StartController::start_select, this));
  startWindow->load_select.connect (boost::bind (&StartController::load_select, this));

  startWindow->draw ();
}

void StartController::start_select ()
{
  change_controller (ControllerID::MAP);
}

void StartController::load_select ()
{
  change_controller (ControllerID::SAVELOAD);
}

StartController::StartController ()
{

}
