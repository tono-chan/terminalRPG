//
// Created by youhei on 17/05/09.
//

#ifndef TERMINALRPG_TERM_MSG_H
#define TERMINALRPG_TERM_MSG_H

#include <string>

class TermMsg {

 private:

  int height_;
  int width_;
  std::string msg_;

 public:
  TermMsg (int height, int width);
  TermMsg (int height, int width, std::string msg);

  bool flash ();
  void clear_line ();
  void progress_bar ();
  void sleep (int ms);
  void up (int up_count);
  void down (int down_count);
  void shake (int vertical_intensity, int horizon_intensity, int repeat, int interval_ms);
};

#endif //TERMINALRPG_TERM_MSG_H
