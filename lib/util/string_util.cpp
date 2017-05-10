//
// Created by youhei on 17/05/10.
//

#include <EastWidthAsian.h>
#include "string_util.h"

int StringUtil::getSize() {
    unsigned int len = 0;
    int pos;
    unsigned char lead;
    int char_size = 0;

    for ( pos = 0 ; pos < word_.size(); pos += char_size) {
        lead = (unsigned char) word_[pos];
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

int StringUtil::getAsianWidth() {
    unsigned int width = 0;
    int pos;
    unsigned char lead;
    int char_size = 0;

    for ( pos = 0 ; pos < word_.size(); pos += char_size) {
        lead = (unsigned char) word_[pos];
        if (lead < 0x80) {
            char_size = 1;
        } else if (lead < 0xE0) {
            char_size = 2;
        } else if (lead < 0xF0) {
            char_size = 3;
        } else {
            char_size = 4;
        }

        std::string character = word_.substr(pos, char_size);

        EastWidthAsian code;

        std

        code.width_char_code[]
    }
    return width;

    return 0;
}

StringUtil::StringUtil(std::string word) {
    word_ = word;

}


