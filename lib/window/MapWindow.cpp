//
// Created by youhei on 17/05/13.
//

#include "MapWindow.h"
#include <string>

void MapWindow::draw (int y, int x)
{
  Window::draw ();

  auto data = model_->map_data ();

  wclear (map);
  waddstr (map, "hello world");

  for (int i = 0; i < map_h_; i++)
    {
      for (int j = 0; j < map_w_; j++)
        {
          wmove (map, i, j);
          setPixel (data[i][j]);
        }
    }
  wrefresh (map);

  for( auto object : model_->object_list () )
    {
      wmove(map,object->y(),object->x() );
      waddstr (map, object->graphics ().c_str ());
    }
  wrefresh (map);
  wrefresh (mapFrame);
  wrefresh (mapFrame);
  prefresh ( mapOut, y,  x, 0, 0, h_-1, w_-1 );
  touchwin (mapOut);
}

MapWindow::MapWindow (MapModel *mapmodel)
{
  Window ();
  model_ = mapmodel;
  map_w_ = model_->width ();
  map_h_ = model_->height ();
  mapOut = newpad ( h_ + map_h_, w_ + map_w_);
  mapFrame = subwin (mapOut, map_h_ + 2, map_w_ + 2, h_/2  - 1, w_/2 - 1);
  map = subwin (mapOut, map_h_, map_w_, h_ / 2, w_ / 2);
  wborder (mapFrame, '|', '|', '-', '-', '-', '|', '|', '-');
}

void MapWindow::setPixel (WINDOW *window, int index)
{
  switch (index)
    {
      case 0 :waddstr(window, " ");
      break;
      case 1 :waddstr(window, "@");
      break;
      default:waddstr(window, "*");
      break;
    }

}

void MapWindow::setPixel (int index)
{
  setPixel (map, index);
}
