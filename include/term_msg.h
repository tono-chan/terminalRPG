//
// Created by youhei on 17/05/09.
//

#ifndef TERMINALRPG_TERM_MSG_H
#define TERMINALRPG_TERM_MSG_H

#include <string>

class term_msg {

 private:

  int height_;
  int width_;
  std::string msg_;

 public:
  term_msg (int height, int width);
  term_msg (int height, int width, std::string msg);

  bool flash ();
  bool shake ();
  void clear_line ();
  void progress_bar ();
  void sleep (int sec);
  void up (int up_count);
  void down (int down_count);
};

#endif //TERMINALRPG_TERM_MSG_H
