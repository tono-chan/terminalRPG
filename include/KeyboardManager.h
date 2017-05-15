//
// Created by youhei on 17/05/14.
//

#ifndef TERMINALRPG_KEYBOARDMANAGER_H
#define TERMINALRPG_KEYBOARDMANAGER_H
#include <boost/thread/thread.hpp>
#include <boost/signals2/signal.hpp>
#include "Singleton.h"

class KeyboardManager : public Singleton<KeyboardManager> {
  KeyboardManager();
  friend Singleton<KeyboardManager>  ;

 public:
  int getKey();
  void start_watch(int fps);
  void exit_watch();
  boost::signals2::signal<void(int)> key_push_signal;
  boost::signals2::signal<void(int)> key_release_signal;
 private:
  int key;
  bool is_continue;
  boost::thread th;
  void work (int fps);
};



#endif //TERMINALRPG_KEYBOARDMANAGER_H
