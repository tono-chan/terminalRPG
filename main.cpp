//
// Created by youhei on 17/05/08.
//

#include <iostream>
#include <TerminalWindow.h>
#include <string>
#include <stdio.h>
#include <iostream>
#include <string>
#include <codecvt>
#include <locale>
#include <TermMsg.h>
#include <stdio.h>

void shake (std::string msg)
{

  TerminalWindow *termWin = new TerminalWindow ();

  int left_mergin;
  int top_mergin;

}

int main ()
{
  setlocale (LC_CTYPE, "jpn");
  TerminalWindow *tw = new TerminalWindow ();
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

  TermMsg term_msg1( 100 , 100);

  TermMsg termMsg( 0,0, "なんだと！" );
  termMsg.shake ( 2, 2, 40, 100 );

  return 0;

}
