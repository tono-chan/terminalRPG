//
// Created by youhei on 17/05/08.
//

#include <iostream>
#include <terminalWindow.h>
#include <string>
#include <stdio.h>


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

}
