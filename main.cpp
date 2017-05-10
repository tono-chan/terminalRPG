//
// Created by youhei on 17/05/08.
//

#include <iostream>
#include <terminalWindow.h>
#include <string>
#include <stdio.h>
#include <iostream>
#include <string>
#include <codecvt>
#include <locale>



void shake(std::string msg) {

    terminalWindow *termWin = new terminalWindow();

    int left_mergin;
    int top_mergin;

    }

int main( ) {
    setlocale( LC_CTYPE, "jpn" );
    terminalWindow *tw = new terminalWindow();
    std::cout <<  "height" << tw->height() << std::endl;
    std::cout <<  "width" << tw->width() << std::endl;

    using namespace std;
    wstring_convert<codecvt_utf8<wchar_t>, wchar_t> cv;
    wstring wstr = L"𠮷野家のコピペ";

    for (auto v: wstr) {
        cout << cv.to_bytes(v) << '\n';
    }

    return 0;


}
