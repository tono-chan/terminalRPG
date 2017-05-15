//
// Created by youhei on 17/05/15.
//

#include <ncurses.h>
#include <codecvt>
#include "EventScene.h"
#include "Fps.h"
#include "Define.h"
#include "KeyDefine.h"
#include <locale>
#include <iostream>
EventScene::EventScene ()
{
  count = 0;
  display_count = 0;
}
void EventScene::initialize ()
{

  BaseScene::initialize ();
  activate ();
  message = "ターミナルでゲームづくり";
  std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter;
  u32message = converter.from_bytes (message);

}
void EventScene::finalize ()
{
  BaseScene::finalize ();
  keyConnect.disconnect ();
}
void EventScene::update ()
{
  BaseScene::update ();
  if (display_count < u32message.size ())
    {
      count++;
      if ((count > FPS / CHAR_PER_SECOUND))
        {
          display_count++;
          u32display_message = u32message.substr (0, display_count);
          std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter;
          display = converter.to_bytes (u32display_message);
          count = 0;
        }
    }
}
void EventScene::draw ()
{
  BaseScene::draw ();
  clear ();
  move (0, 0);
  addstr("Event Scene");

  move (1, 0);
  addstr(display.c_str ());
  move (2, 0);
  addstr(std::to_string (count).c_str ());
  move (3, 0);
  addstr(std::to_string (u32message.size ()).c_str ());
  move (4, 0);
  addstr(std::to_string (display_count).c_str ());
  wnoutrefresh (stdscr);
  WINDOW *window = newwin(20,20,10,10 );
  waddstr (window , "hello world");
  wnoutrefresh (window);
  delwin (window);


}
void EventScene::key_handle (int key)
{
  BaseScene::key_handle (key);
  if ( key == RPG_KEY::ENTER )
    {
      display_count = (int) u32message.size () - 1;
    }

}
