//
// Created by youhei on 17/05/14.
//

#include <boost/signals2/signal.hpp>
#include <thread>
#include <iostream>
#include <boost/thread/thread.hpp>

class Timer {
 public:
  Timer(int time){
    time_ = time;
  };
  boost::signals2::signal<void (void)> timeup;
  void start() {
    while ( time_ >= 0 ) {
        time_--;
        std::this_thread::sleep_for (std::chrono::milliseconds (1000));
      }
    timeup();
  }
 private:
  int time_;
};


class TimeKeeper {
 public:
  void start() {
  }
  void timeup() {
    std::cout << "time up" << std::endl;
    exit(1);
  }


};


int main() {
  TimeKeeper timeKeeper;
  Timer timer(10);
  boost::thread th(boost::bind(&Timer::start, &timer) );
  timer.timeup.connect (boost::bind(&TimeKeeper::timeup, &timeKeeper) );

  std::string s;
  std::cin >> s;


  return 0;

}