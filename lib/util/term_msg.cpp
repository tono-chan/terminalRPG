//
// Created by youhei on 17/05/09.
//

#include <iostream>
#include "term_msg.h"
#include <sstream>
#include <iomanip>
#include <thread>
#include <random>

bool term_msg::flash ()
{
  std::cout << msg_ << std::endl;

//    if (msg_.length();
//    )

  return true;
}

term_msg::term_msg (int height, int width)
{

}

term_msg::term_msg (int height, int width, std::string msg)
{
  height_ = height;
  width_ = width;
  msg_ = msg;

}

void term_msg::up (int up_count)
{
  fprintf (stderr, "\0x1b[%dA", up_count);
}

void term_msg::down (int down_count)
{
  printf ("\0x1b[%dB", down_count);
}

void term_msg::clear_line ()
{
  std::cout << "\r\0x1b[94m";
}

void term_msg::sleep (int ms)
{
  std::this_thread::sleep_for (std::chrono::milliseconds (ms));
}

void term_msg::progress_bar ()
{
  int i = 0;
  for (i; i < 10; i++)
    {
      clear_line ();
      std::cout << i;
      fflush (stdout);
      sleep (100);
    }
  clear_line ();
  std::cout << "clear!!" << std::endl;
}

void clrscr ()
{
  if (system ("CLS")) system ("clear");
}

/**
 * 画面に文字を揺らして出力
 * @param vertical_intensity 縦揺れの大きさ
 * @param horizon_intensity 横揺れの大きさ
 * @param repeat 揺れる回数
 * @param ms 揺れる間隔
 * @return
 */
void term_msg::shake (int vertical_intensity, int horizon_intensity, int repeat, int interval_ms)
{
  std::random_device rnd;
  std::mt19937 mt (rnd ());
  std::uniform_int_distribution<> vertical_rand (0, vertical_intensity);
  std::uniform_int_distribution<> horizon_rand (0, horizon_intensity);
  int top_mergin;
  int left_mergin;

  for (int i = 0; i < repeat; i++)
    {
      left_mergin = vertical_rand (mt);
      top_mergin = horizon_rand (mt);

      std::string top_string = "";
      std::string left_string = "";

      for (int j = 0; j < top_mergin; j++)
        {
          top_string += "\n";
        }

      for (int j = 0; j < left_mergin; j++)
        {
          left_string += " ";
        }
      std::string display = top_string + left_string + msg_;
      std::cerr << display << std::endl;
      fflush (stderr);

      sleep (interval_ms);
      clrscr ();
    }
}
