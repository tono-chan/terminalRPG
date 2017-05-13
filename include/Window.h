//
// Created by youhei on 17/05/13.
//

#ifndef TERMINALRPG_WINDOW_H
#define TERMINALRPG_WINDOW_H

#include <vector>
class Window {
 protected:
  int height;
  int width;
  std::vector<Window> *window;

 public:
  Window();
  virtual void draw ();
};

#endif //TERMINALRPG_WINDOW_H
