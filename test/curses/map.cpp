//
// Created by youhei on 17/05/11.
//

#include <stdio.h>
#include <locale>
#include <iostream>
#include <string>
#include <ncurses.h>
#include <codecvt>
#include <StringUtil.h>

int main (void)
{

  setlocale (LC_ALL, "");
  std::string player_icon = "勇";
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
  x=0;
  y=0;


  int map_h = 10;
  int map_w = 20;
  std::string word = "hello world";
  WINDOW *mapOut = newpad (map_h + h, map_w + w );
  WINDOW *mapFrame = subwin(mapOut, map_h+2, map_w+2, h/2-1, w/2-1);
  WINDOW *map = subwin (mapOut, map_h, map_w, h/2, w/2 );
  box( mapFrame , '|','-' );
  wmove(map , map_h/2, map_w/2 - word.length ()/2 );
  waddstr (map ,word.c_str ());


  while (1)
    {
      wclear(map);
      wmove(map,4,4);
      waddstr(map, "敵");
      wmove(map,y,x);
      waddstr(map ,player_icon.c_str ());
      wrefresh (map);
      prefresh (mapOut ,y, x, 0, 0, h-1, w-1 );
      touchwin (mapOut);

      key = getch();
      if (key == 'q') break;

      switch (key)
        {
          case KEY_UP:
            if (0 < y) {
              y--;
              }
          break;
          case KEY_DOWN:if(y + 1 < map_h) { y++;}
          break;
          case KEY_LEFT:
            if (x > 0)
              {
                x--;
              }
          break;
          case KEY_RIGHT:
            if (x + player_width < map_w )
              {
                x++;
              }
          break;
        }
    }
  endwin ();
}
