//
// Created by youhei on 17/05/11.
//

#include <gtest/gtest.h>
#include "Chara.h"

TEST(Player, init)
{

  std::string name = "勇者";
  std::string enname = "敵";
  int lv = 100;
  int exp =100;
  int hp = 100;
  int mp = 100;
  int str = 100;
  int dex = 100;
  int vit = 100;
  int intell = 100;
  int agi = 100;
  int mnd = 100;
  int luk = 100;

  Chara *player = new Chara(name, lv ,exp,hp, mp, str, dex, vit, intell, agi, mnd, luk);
  Chara *enemy = new Chara( enname, lv ,exp,hp, mp ,str, dex, vit, intell, agi, mnd, luk );

  ASSERT_EQ(name, player->name ());
  if ( player->attack(enemy) ) {
      ASSERT_NE(100, enemy->hp());
    }

  for ( int i = 0; i < 10000 ; i++ ) {
      player->attack (enemy);
    }
  ASSERT_FALSE(enemy->is_alive());
//  int itemId;
//  Item item(itemId);
//  ASSERT_TRUE( player.equip(item));
//  ASSERT_FALSE( player.equip(item));
}