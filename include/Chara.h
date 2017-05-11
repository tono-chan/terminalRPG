//
// Created by youhei on 17/05/11.
//

#ifndef TERMINALRPG_CHARA_H
#define TERMINALRPG_CHARA_H
#include <string>

class Chara {

 public:
  Chara (std::string name,int lv, int exp, int hp, int mp, int str, int dex, int vit, int intelligent, int agi, int mnd, int luk);
  std::string name ()const;
  int dex ();
  int agi ();
  bool attack( Chara* target );
  int defencePower ();
  int hp ()const;
  int max_hp ()const;
  int mp ()const;
  int max_mp ()const;
  int lv()const;
  int exp()const;
  bool is_alive();

 private:
  std::string name_;
  int lv_;
  int exp_;
  int hp_;
  int max_hp_;
  int mp_;
  int max_mp_;
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
