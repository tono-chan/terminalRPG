//
// Created by youhei on 17/05/09.
//

#ifndef TERMINALRPG_TERM_MSG_H
#define TERMINALRPG_TERM_MSG_H


#include <string>

class TermMsg {

private:
    int height_;
    int width_;
    int msg_;


public:

    TermMsg(int height, int width,std::__cxx11::string msg);

    bool flash();
};


#endif //TERMINALRPG_TERM_MSG_H
