//
// Created by youhei on 17/05/15.
//

#ifndef TERMINALRPG_FPS_H
#define TERMINALRPG_FPS_H
#include "Singleton.h"
#include <boost/date_time/posix_time/ptime.hpp>

static constexpr int FPS = 30;

class Fps : public Singleton<Fps> {
  Fps ();
  friend Singleton<Fps>  ;
 private:
  boost::posix_time::ptime start_time;
  boost::posix_time::ptime mst2_;
  int count_;
  double frame_time_;
  double real_fps_;
  int fps_;
 public:
  void set(int fps);
  int fps();
  void update();
  void draw();
  void wait();
};

#endif //TERMINALRPG_FPS_H
