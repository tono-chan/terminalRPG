//
// Created by youhei on 17/05/13.
//

#include <StartWindow.h>
#include "WindowController.h"
void WindowController::draw ()
{

  current->draw ();
}

WindowController::~WindowController() {
  delete (current);
}



WindowController::WindowController ()
{
  current = new StartWindow();

}
