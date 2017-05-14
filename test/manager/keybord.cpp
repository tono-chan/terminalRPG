//
// Created by youhei on 17/05/14.
//

#include <cstdio>
#include <chrono>
#include <thread>
#include "keybord.h"
#include "KeyboardManager.h"

int main()
{
  KeyboardManager manager;
  manager.start_watch ();

  printf("start " );
  while ( true )
    {
      int key = manager.getKey ();
      if ( key != 0 )
        {          printf ("you are input : %d\n", manager.getKey ());
        }
      if (key == 'q') break;
      std::this_thread::sleep_for (std::chrono::milliseconds(10));
    }

  manager.exit_watch ();

  return 0;

}
