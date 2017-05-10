//
// Created by youhei on 17/05/10.
//

#include "string_util.h"

int StringUtil::getSize(std::string str) {
    unsigned int len = 0;
    int pos;
    unsigned char lead;
    int char_size = 0;

    for ( pos = 0 ; pos < str.size(); pos += char_size) {
        lead = (unsigned char) str[pos];
        if (lead < 0x80) {
            char_size = 1;
        } else if (lead < 0xE0) {
            char_size = 2;
        } else if (lead < 0xF0) {
            char_size = 3;
        } else {
            char_size = 4;
        }

        len++;
    }
    return len;
}
