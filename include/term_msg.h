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
};

#endif //TERMINALRPG_TERM_MSG_H
