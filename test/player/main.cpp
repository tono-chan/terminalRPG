//
// Created by youhei on 17/05/11.
//

#include <gtest/gtest.h>

TEST(Player, init)
{

  std::string name = "勇者";
  std::string enname = "敵";
  int hp = 100;
  int str = 100;
  int dex = 100;
  int vit = 100;
  int intell = 100;
  int agi = 100;
  int mnd = 100;
  int luk = 100;

  Chara *player = new Chara(name, hp, str, dex, vit, intell, agi, mnd, luk);
  Chara *enemy = new Chara( enname, hp, str, dex, vit, intell, agi, mnd, luk );

  ASSERT_EQ(name, player.name ());
  if ( player->attack(enemy) ) {
      ASSERT_NE(100, enemy->hp);
    }

//  int itemId;
//  Item item(itemId);
//  ASSERT_TRUE( player.equip(item));
//  ASSERT_FALSE( player.equip(item));
}