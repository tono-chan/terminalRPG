//
// Created by youhei on 17/05/15.
//

#ifndef TERMINALRPG_EVENTSCENE_H
#define TERMINALRPG_EVENTSCENE_H

#include "BaseScene.h"
class EventScene :public BaseScene {
 public:
  EventScene ();
  void initialize () override;
  void finalize () override;
  void update () override;
  void draw () override;
 private:
  int count;
  size_t display_count;
  std::string message;
  std::u32string u32message;
  std::u32string u32display_message;
  std::string display;
  void key_handle(int key);


};

#endif //TERMINALRPG_EVENTSCENE_H
