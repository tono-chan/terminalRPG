//
// Created by youhei on 17/05/09.
//

#include <iostream>
#include "term_msg.h"
#include <stdio.h>
#include <stdlib.h>

bool TermMsg::flash() {
    std::cout << msg_ << std::endl;

//    if (msg_.length();
//    )

    return true;
}



TermMsg::TermMsg(int height, int width) {

}

TermMsg::TermMsg(int height, int width, std::string msg) {
    height_ = height;
    width_ = width;
    msg_ = msg;

}

void clrscr()
{
    system("clear");
}

bool TermMsg::shake() {

    printf("hello");

    clrscr();

    printf("world");

    return false;
}
