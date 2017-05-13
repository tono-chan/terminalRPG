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

  for (int i = 0; i < map_height_; i++)
    {
      for (int j = 0; j < map_width_; j++)
        {
          wmove (map, i, j);
          setPixel (data[i][j]);
        }
    }
  wrefresh (map);

  for( auto object : model_->object_list () )
    {
//      int width;
//      int height;
//      WINDOW *image = object->graphics ();
//      getmaxyx( image, height, width );
//      WINDOW *copyWin = subwin( map, height, width, object->y(), object->x());
//      copywin (image,copyWin, height , width , 0 , 0 , height , width , FALSE);
//      delwin(copyWin);
//      delwin(image);
      wmove(map,object->y(),object->x() );
      waddstr (map, object->graphics ().c_str ());

    }
  wrefresh (map);
  touchwin (map);
//  wrefresh (mapFrame);
//  prefresh ( mapMargin, y + term_height/2 , x + term_width/2 , 0, 0, term_height, term_width );
//  touchwin (mapMargin);
}

MapWindow::MapWindow (MapModel *mapmodel)
{
  Window ();
  model_ = mapmodel;
  map_width_ = model_->width ();
  map_height_ = model_->height ();
//  mapMargin = newpad (term_width + map_width_, term_width + term_height);
//  mapFrame = subwin (mapMargin, map_height_ + 2, map_width_ + 2, map_height_ / 2 - 1, map_width_ - 1);
//  map = subwin (mapMargin, map_width_, map_height_, map_height_ / 2, map_width_ / 2);
  map = newwin (map_height_, map_width_, 0,0 );




//  wborder (mapFrame, '|', '|', '-', '-', '-', '|', '|', '-');
}

void MapWindow::setPixel (WINDOW *window, int index)
{
  switch (index)
    {
      case 0 :waddstr(window, "n");
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
