//
// Created by youhei on 17/05/11.
//

#ifndef TERMINALRPG_CHARA_H
#define TERMINALRPG_CHARA_H
#include <string>

class Chara {

 public:
  Chara (std::string name, int hp, int mp, int str, int dex, int vit, int intelligent, int agi, int mnd, int luk);
  std::string name ();
  int dex ();
  int agi ();
  bool attack( Chara* target );
  int defencePower ();
  int hp ();
  bool is_alive();
 private:
  std::string name_;
  int hp_;
  int str_;
  int dex_;
  int vit_;
  int intelligent_;
  int agi_;
  int mnd_;
  int luk_;
  int power ();
  void damaged (int power);
};

#endif //TERMINALRPG_CHARA_H
