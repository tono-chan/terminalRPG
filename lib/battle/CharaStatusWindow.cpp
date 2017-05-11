//
// Created by youhei on 17/05/12.
//

#include "CharaStatusWindow.h"
CharaStatusWindow::CharaStatusWindow (const Chara *chara, int y, int x) : chara_ (chara)
{
  window_ = newwin (5, 35, y, x);

}
void CharaStatusWindow::draw ()
{
  wclear(window_);
  std::string name = chara_->name ();
  wborder (window_, '|', '|', '-', '-', '-', '|', '|', '-');
  waddstr (window_, chara_->name ().c_str ());

  int hp_len = bar_length_ * chara_->hp () / chara_->max_hp ();
  int mp_len = bar_length_ * chara_->mp () / chara_->max_mp ();

  std::string hp_bar="";
  std::string mp_bar="";

  for (int i = 0; i < hp_len; i++)
    {
      hp_bar += "=";
    }
  for (int i = 0; i < mp_len; i++)
    {
      mp_bar += "=";
    }

  wmove(window_, 1, left_mergin);
  std::string msg1 = "Lv:"+std::to_string (chara_->lv()) + " Exp:" + std::to_string (chara_->exp ());
  waddstr(window_,msg1.c_str ());

  std::string msg2 = "HP:" + hp_bar;
  wmove(window_, 2, left_mergin);
  waddstr(window_,msg2.c_str ());
  std::string msg22 = std::to_string (chara_->hp ()) + "/" + std::to_string (chara_->max_hp());
  wmove(window_, 2, left_mergin + 3 + bar_length_);
  waddstr(window_,msg22.c_str ());

  std::string msg3 = "MP:" + mp_bar;
  wmove(window_, 3, left_mergin);
  waddstr(window_,msg3.c_str ());
  std::string msg32 = std::to_string (chara_->mp ()) + "/" + std::to_string (chara_->max_mp());
  wmove(window_, 3, left_mergin + 3 + bar_length_);
  waddstr(window_,msg32.c_str ());

  wrefresh (window_);
}
CharaStatusWindow::~CharaStatusWindow ()
{
  delwin (window_);
}
