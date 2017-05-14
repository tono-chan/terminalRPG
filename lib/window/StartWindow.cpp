//
// Created by youhei on 17/05/13.
//

#include "StartWindow.h"
#include <string>
#include <CommandMenu.h>
#include <MapWindow.h>
#include <MapController.h>

void StartWindow::draw ()
{

  Window::draw ();

  werase (window_);
  wrefresh (window_);

  std::string message = "terminal RPG";
  wmove (window_, 10, (int) (message.length () / 2));
  waddstr (window_, message.c_str ());

  std::string new_game = "new game";
  std::string load_game = "load game";

  std::vector<std::string> command;
  command.push_back (new_game);
  command.push_back (load_game);

  int max_str_len = (int) load_game.length ();

  wrefresh (window_);
  CommandMenu *menu = new CommandMenu (command, 14, (w_ - (max_str_len + 3)) / 2);

  switch (menu->select ())
    {
      case 0 :
        MapController *mapController = new MapController();
        mapController->exec ();

      break;
    };

}

StartWindow::StartWindow ()
{
  window_ = newwin (h_, w_, 0, 0);
}

