//
// Created by youhei on 17/05/11.
//

#include "CommandMenu.h"
CommandMenu::CommandMenu (const std::vector<std::string> &list, int y, int x) : list_(list)
{
  int size = (int) list.size ();
  int height = size + 2;
  int width = 15; // 横全角６文字 + 枠線 2(左右) + カーソル
  int left_mergin = 2;
  window_ = newwin (height, width, y, x);
  wborder (window_, '|', '|', '-', '-', '-', '|', '|', '-');
  waddstr(window_, "menu");
  for (int i = 0; i < size; i++)
    {
      wmove (window_, i + 1, left_mergin);
      waddstr(window_, list.at (i).c_str ());
    }
}
CommandMenu::~CommandMenu ()
{

}
int CommandMenu::select ()
{
  int id = 0;
  int key = 0;
  int esc = 27;
  int enter = 10;
  int size = (int) list_.size ();

  keypad (window_ , true);
  while (1)
    {
      wdelch(window_);
      winsch(window_, ' ');
      mvwdelch (window_, id+1 , 1);
      winsch(window_, '*');
      wrefresh (window_);

      key = wgetch(window_);
      if (key == esc || key == 'q') return -1;
      if (key == enter) return id;
      switch ( key ) {
          case KEY_UP :
            if ( 0 < id ) {
                id--;
              }
          break;
          case KEY_DOWN:
            if (id < size - 1) {
                id++;
              }
          break;
        }

    }


  return id;
}


