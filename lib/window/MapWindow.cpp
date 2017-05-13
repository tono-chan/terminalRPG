//
// Created by youhei on 17/05/13.
//

#include "MapWindow.h"

void MapWindow::draw ()
{
  Window::draw ();
  werase (window_);
}

MapWindow::MapWindow ()
{

}
void MapWindow::setMap (int map_height, int map_width, int *map_data)
{

}
