//
// Created by youhei on 17/05/08.
//

#include <iostream>
#include <terminal_window.h>
#include <string>
#include <stdio.h>
#include <iostream>
#include <string>
#include <codecvt>
#include <locale>
#include <term_msg.h>
#include <stdio.h>

void shake (std::string msg)
{

  terminal_window *termWin = new terminal_window ();

  int left_mergin;
  int top_mergin;

}

int main ()
{
  setlocale (LC_CTYPE, "jpn");
  terminal_window *tw = new terminal_window ();
  std::cout << "height" << tw->height () << std::endl;
  std::cout << "width" << tw->width () << std::endl;

  using namespace std;
  wstring_convert<codecvt_utf8<wchar_t>, wchar_t> cv;
  wstring wstr = L"𠮷野家のコピペ";

  for (auto v: wstr)
    {
      cout << cv.to_bytes (v) << '\n';
    }

  if (system("CLS")) system("clear");

  term_msg term_msg1( 100 , 100);

  term_msg termMsg( 0,0, "なんだと！" );
  termMsg.shake ( 2, 2, 40, 100 );

  return 0;

}
