//
// Created by youhei on 17/05/14.
//

#include <cstdio>
#include <chrono>
#include <thread>
#include "keybord.h"
#include "KeyboardManager.h"
#include <ncurses.h>

void key_handler(int key) {
  addch((int)key);
  refresh ();
}

int main()
{
  KeyboardManager manager;
  manager.start_watch (60);
  manager.key_push_signal.connect (boost::bind(key_handler , _1));

//  KeyboardManager manager2;
//  manager2.start_watch (60);
//  manager2.key_push_signal.connect (boost::bind(key_handler , _1));


  initscr ();
  cbreak();
  noecho();
  keypad(stdscr, true);
  printf("start " );
  while ( true )
    {
      int key = manager.getKey ();
//      if ( key != 0 )
//        {
//          printf ("you are input : %d\n", manager.getKey ());
//        }
      if (key == 'q') break;
      std::this_thread::sleep_for (std::chrono::milliseconds(10));
    }
  endwin ();

  manager.exit_watch ();
//  manager2.exit_watch ();

  return 0;

}
