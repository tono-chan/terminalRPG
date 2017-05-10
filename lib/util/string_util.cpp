//
// Created by youhei on 17/05/10.
//

#include <east_width_asian.h>
#include <iostream>
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
        int charcode = get_char_code(character);


        int foo=0;
        for ( int i = 0; i < east_width_asian::codelist_size ; i++ ) {
            if (east_width_asian::width_char_code[i][0] <= charcode) {
                foo = east_width_asian::width_char_code[i][0];
                if (charcode <= east_width_asian::width_char_code[i][1]) {
                    width +=2;
                }
            } else {
                std::cout << foo;
            }
        }

    }
    return width;

}

unsigned int StringUtil::get_char_code( std::string c )  {
    unsigned int charcode = 0;
    int size = (int) c.size();
    unsigned char lead;
    for (int i = 0; i < size ; i++ ) {
        lead = (unsigned char) c[i];
        charcode |= (lead << (size - i - 1)*8);
    }
    return charcode;
}


StringUtil::StringUtil(std::string word) {
    word_ = word;

}
