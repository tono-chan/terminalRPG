//
// Created by youhei on 17/05/13.
//
#include <gtest/gtest.h>
#include <MapModel.h>
#include <MapController.h>

TEST( map, start ) {

  int width = 80;
  int height = 24;
  MapModel *mapModel = new MapModel();

  std::vector<std::vector<int>> map_data;
  for ( int i = 0 ; i < height; i++ )
    {
      std::vector<int> tmp(width);
      for ( int j = 0; j < width ; j++ )
        {
          tmp.push_back ( 0 );
        }
      map_data.push_back ( tmp );
    }

  ASSERT_TRUE( mapModel->load_map(&map_data) );

  delete (mapModel);
}

TEST( map, add_object )
{
  int width = 80;
  int height = 24;
  MapModel *mapModel = new MapModel();

  MapObject player( 10, 10 , (int)ObjectType::HUMAN);
  MapObject ally(10, 10 , (int)ObjectType::HUMAN);
  MapObject enemy(10, 10 , (int)ObjectType::HUMAN);
  mapModel->add( &player );
  mapModel->add( &ally );
  mapModel->add( &enemy );

  unsigned long list_size = mapModel->list_size();
  ASSERT_EQ(3, list_size);

  delete (mapModel);
}

TEST( map , getObj )
{

}

TEST( map, controll )
{
  int width = 80;
  int height = 24;
  MapModel *model = new MapModel();
  MapController *controller = new MapController();
}