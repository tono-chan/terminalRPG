//
// Created by youhei on 17/05/15.
//

#include <Fps.h>
#include <ncurses.h>
#include "FpsTest.h"

int main()
{
  Fps *fps = Fps::Instance ();
  initscr ();
  cbreak();
  noecho();
  keypad(stdscr, true);

  while (true)
    {
      fps->update ();
      fps->draw ();
      fps->wait ();
    }

  endwin ();
}