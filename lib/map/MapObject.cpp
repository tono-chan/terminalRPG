//
// Created by youhei on 17/05/12.
//

#include "MapObject.h"
#include <ncurses.h>
int MapObject::x ()
{
  return x_;
}

int MapObject::y ()
{
  return y_;
}
std::string MapObject::graphics ()
{
//  WINDOW *image = newwin(0,0,1,1);
//  waddstr (image, "o");

  return "o";
}
MapObject::MapObject (int y, int x, int type)
{
  y_ = y;
  x_ = x;
  type_ = type;

}
void MapObject::up ()
{
  y_--;
}
void MapObject::down ()
{
  y_++;
}
void MapObject::left ()
{
  x_--;
}
void MapObject::right ()
{
  x_++;
}
Point MapObject::point ()
{
  return Point (x_, y_);
}
int MapObject::type ()
{
  return type_;
}

