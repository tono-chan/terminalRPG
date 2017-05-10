//
// Created by youhei on 17/05/10.
//

#ifndef TERMINALRPG_STRINGUTIL_H
#define TERMINALRPG_STRINGUTIL_H

#include <string>

class StringUtil {

public:
    StringUtil(std::string word);

    int getAsianWidth();

    int getSize();

    int get_char_code(std::string c);
private:

    std::string word_;
};


#endif //TERMINALRPG_STRINGUTIL_H