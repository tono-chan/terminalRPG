//
// Created by youhei on 17/05/11.
//

#include <stdio.h>
#include <locale>
#include <iostream>
#include <string>
#include <ncurses.h>
#include <codecvt>
#include <string_util.h>

int main (void)
{

  setlocale (LC_ALL, "");
  std::string player_icon = "あ";
//  std::string player_icon = "\u265E";
  std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter;
  string_util sutil (player_icon);
  int player_width = sutil.get_asian_width ();

  int x, y, w, h;
  int key;

  initscr ();
  noecho ();
  cbreak ();
  curs_set (0);
  keypad (stdscr, TRUE);
  getmaxyx(stdscr, h, w);
  x=10;
  y=10;
  while (1)
    {
      erase ();
      move (y, x);
      addstr( player_icon.c_str () );
      refresh ();

      key = getch();
      if (key == 'q') break;

      switch (key)
        {
          case KEY_UP:
            if (0 < y) {
              y--;
              }
          break;
          case KEY_DOWN:if(y + 1 < h) { y++;}
          break;
          case KEY_LEFT:
            if (x > 0)
              {
                x--;
              }
          break;
          case KEY_RIGHT:
            if (x + player_width < w )
              {
                x++;
              }
          break;
        }

    }
  endwin ();
}
