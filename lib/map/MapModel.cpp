//
// Created by youhei on 17/05/12.
//

#include <cstdlib>
#include "MapModel.h"
#include <vector>
MapModel::MapModel ()
{
}

bool MapModel::load_map ()
{
  int data[7][19] =
              {
                  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                  {1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0},
                  {1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0},
                  {1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0},
                  {1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0},
                  {1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0},
              };
  height_ = 7;
  width_ = 19;

  for ( int i = 0 ; i < height_ ; i++ )
    {
      std::vector<int> record;
      for ( int j = 0; j < width_; j++ ) {
          record.push_back (data[i][j]);
        }
      map_data_.push_back (record);
    }

  return true;
}

unsigned long MapModel::list_size ()
{
  return object_list_.size ();
}

bool MapModel::add (MapObject *object)
{
  object_list_.push_back (object);
  return true;
}
std::vector<MapObject*> MapModel::get (int y, int x)
{
  std::vector <MapObject*> list;
  for (auto object : object_list_)
    {
      if (object->x () == x && object->y () == y)
        {
          list.push_back (object);
        }
    }
  return list;
}
int MapModel::height ()
{
  return height_;
}
int MapModel::width ()
{
  return width_;
}
const std::vector<std::vector<int>> &MapModel::map_data ()
{
  return map_data_;
}
int MapModel::focus_x ()
{
  return focus_x_;
}

int MapModel::focus_y()
{
  return focus_y_;
}
const std::vector<MapObject *> MapModel::object_list ()
{
  return object_list_;
}

bool MapModel::is_map_range( int y , int x )
{
  return 0 <= y && y < height_ && 0 <= x && x < width_;
}

bool MapModel::can_put (int y, int x)
{
  return is_map_range (y , x) && map_data_[y][x] == 0;
}
bool MapModel::load_map (std::vector<std::vector<int>> *map_data)
{

  return true;
}
