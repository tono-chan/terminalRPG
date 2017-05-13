//
// Created by youhei on 17/05/12.
//

#include <cstdlib>
#include "MapModel.h"
#include <vector>
MapModel::MapModel (int height, int width)
{
  height_ = height;
  width_ = width;
}

bool MapModel::load_map (std::vector<std::vector<int>> *map_data)
{
  if ( map_data != NULL)
    {
      map_data_ = map_data;
      return true;
    }
  return false;
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

