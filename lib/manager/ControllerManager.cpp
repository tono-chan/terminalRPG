//
// Created by youhei on 17/05/14.
//

#include <StartController.h>
#include "ControllerManager.h"
#include "ControllerId.h"


ControllerManager::ControllerManager ()
{

}
void ControllerManager::exec ()
{
  current = new StartController();
  current->change_controller.connect (boost::bind (&ControllerManager::change_controller_handler , this, _1));
  current->exec ();
}
void ControllerManager::change_controller_handler (ControllerID controllerID)
{
  delete current;
//  if (controllerID == ControllerID::BATTLE) {
//      current = new BattleController();
//      current ->exec ();
//    }

  if (controllerID == ControllerID::MAP)
    {
      current = new ControllerManager();
      current->exec ();
    }

}
