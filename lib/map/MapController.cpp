//
// Created by youhei on 17/05/13.
//

#include <chrono>
#include <thread>

#include <iostream>

#include "MapController.h"
MapController::MapController ()
{
  keypad (stdscr, TRUE);

  mapModel = new MapModel ();
  mapModel->load_map ();

  mapWindow = new MapWindow (mapModel);

  MapObject *player = new MapObject (1, 1);

  mapModel->add (player);
}

void MapController::exec ()
{
  MapObject *player = mapModel->object_list ()[0];

  try
    {
      std::thread t1 (&MapController::keyevent_handler, this);

      while (1)
        {
          mapWindow->draw (player->y(), player->x());
          if (key == 'q') break;

          std::this_thread::sleep_for (std::chrono::milliseconds (100));

        }
      t1.join ();
    }
  catch (std::exception &ex)
    {
      std::cerr << ex.what () << std::endl;
    }
}

void MapController::keyevent_handler ()
{
  while (1)
    {
      MapObject *player = mapModel->object_list ()[MapModel::PLAYER_ID];
      key = getch();
      if (key == 'q') return;
      switch (key)
        {
          case KEY_UP:
            {
              if (mapModel->can_put (player->y () - 1, player->x ()))
                {
                  player->up ();
                }
            }
          break;

          case KEY_DOWN:
            if (mapModel->can_put (player->y () + 1, player->x ()))
              {
                player->down ();
              }
          break;

          case KEY_LEFT:
            if (mapModel->can_put (player->y (), player->x () - 1))
              {
                player->left ();
              }
          break;

          case KEY_RIGHT:
            if (mapModel->can_put (player->y (), player->x () + 1))
              {
                player->right ();
              }
          break;
          case 'm':

            break;
        }
    }
}

MapController::~MapController ()
{
  delete mapModel;
  delete mapWindow;

}
