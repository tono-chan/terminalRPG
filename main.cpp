//
// Created by youhei on 17/05/08.
//

#include <iostream>
#include <App.h>
#include <StartWindow.h>
#include <CommandMenu.h>

int main ()
{
  setlocale (LC_ALL, "");
  App *app = new App();
  app->exec ();

//
//  StartWindow *window = new StartWindow();
//  window->draw ();

  delete app;
  return 0;

}
