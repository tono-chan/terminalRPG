//
// Created by youhei on 17/05/14.
//

#ifndef TERMINALRPG_KEYBOARDMANAGER_H
#define TERMINALRPG_KEYBOARDMANAGER_H
#include <boost/thread/thread.hpp>

class KeyboardManager {
 public:
  KeyboardManager();
  int getKey();
  void start_watch();
  void exit_watch();
 private:
  int key;
  int is_exit;
  boost::thread th;
  void work ();
};



#endif //TERMINALRPG_KEYBOARDMANAGER_H
