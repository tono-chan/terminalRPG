//
// Created by youhei on 17/05/08.
//

#include <iostream>
#include <terminalWindow.h>
#include <string>


int main( ) {
    terminalWindow *tw = new terminalWindow();
    std::cout <<  "height" << tw->height() << std::endl;
    std::cout <<  "width" << tw->width() << std::endl;


}
