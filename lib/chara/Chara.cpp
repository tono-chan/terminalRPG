//
// Created by youhei on 17/05/11.
//

#include "Chara.h"
#include <string>
#include <random>

Chara::Chara (std::string name, int hp, int mp, int str, int dex, int vit, int intelligent, int agi, int mnd, int luk)
{
  name_ = name;
  hp_ = hp;
  str_ = str;
  dex_ = dex;
  vit_ = vit;
  intelligent_ = intelligent;
  agi_ = agi;
  mnd_ = mnd;
  luk_ = luk;
}

std::string Chara::name ()
{
  return name_;
}

int Chara::hp ()
{
  return hp_;
}

int Chara::dex ()
{
  return dex_;
};

int Chara::agi ()
{
  return agi_;
}

int Chara::power ()
{
  return str_;
}

int Chara::defencePower ()
{
  return vit_;
}

bool Chara::attack (Chara *target)
{
  std::random_device rnd;
  std::mt19937 mt (rnd ());
  std::uniform_int_distribution<> rand100 (0, 99);
  if (rand + this->dex () - target->agi ())
    {
      target->damaged (power ());
      return true;
    }
  return false;
}

void Chara::damaged (int power)
{
  int damage = power / 2 - defencePower () / 4;
  hp_ -= damage;
  if (hp_ < 0)
    { hp_ = 0; };
}
bool Chara::is_alive ()
{
  return hp_ > 0;
}
