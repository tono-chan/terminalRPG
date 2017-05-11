//
// Created by youhei on 17/05/11.
//

#include <stdio.h>
#include <ncurses.h>
#include <cstring>
#include <string>
#include <codecvt>
#include <locale>
#include <string_util.h>

int main ()
{
  int y, w, h;
  int x;
  std::u32string str = U"hello world";
  std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter;

  string_util sutil (str);
  int key;
  setlocale (LC_ALL, "");
  initscr ();
  noecho ();
  cbreak ();
  curs_set(0);
  keypad (stdscr, TRUE);

  getmaxyx(stdscr, h, w);
  y = h / 2;
  x = (w - sutil.get_asian_width ()) / 2;
  int width = sutil.get_asian_width ();

  while (1)
    {
      erase ();
      move (y, x);
      addstr(converter.to_bytes (str).c_str ());
      refresh ();

      key = getch();
      if (key == 'q') break;

      switch (key)
        {
          case KEY_UP:y--;
          break;
          case KEY_DOWN: y++;
          break;
          case KEY_LEFT:
            if (x > 0)
              {
                x--;
                break;
              }
          case KEY_RIGHT:
          if (x < w - width - 1)
            {
              x++;
              break;
            }
        }

    }
  endwin ();

  return 0;
}
