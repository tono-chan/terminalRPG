//
// Created by youhei on 17/05/11.
//

#include "Chara.h"
#include <string>
#include <random>

Chara::Chara (std::string name,int lv, int exp, int hp, int mp, int str, int dex, int vit, int intelligent, int agi, int mnd, int luk)
{

  name_ = name;
  lv_ = lv;
  exp_ = exp;
  hp_ = hp;
  max_hp_ = hp;
  mp_ = mp;
  max_mp_ = mp;
  str_ = str;
  dex_ = dex;
  vit_ = vit;
  intelligent_ = intelligent;
  agi_ = agi;
  mnd_ = mnd;
  luk_ = luk;
}

std::string Chara::name ()const
{
  return name_;
}

int Chara::hp ()const
{
  return hp_;
}

int Chara::max_hp()const
{
  return max_hp_;
}

int Chara::mp()const
{
  return mp_;
}

int Chara::max_mp()const
{
  return max_mp_;
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
  target->damaged (power ());
  return true;

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
int Chara::lv () const
{
  return lv_;
}
int Chara::exp () const
{
  return exp_;
}
