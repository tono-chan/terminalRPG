//
// Created by youhei on 17/05/10.
//

#include <gtest/gtest.h>
#include <string_util.h>
#include <EastWidthAsian.h>

TEST ( utf8 , count ) {

    std::string word = "おはよう";
    StringUtil strutil(word);
    int size = strutil.getSize();

    ASSERT_EQ(4, size);
}

TEST ( utf8 , charWidth ) {

    std::string word = "a";

    StringUtil strutil(word);

    int charcode = strutil.get_char_code("a");
    ASSERT_EQ((char)'a',charcode);
//    int width = strutil.getAsianWidth();
//
//    ASSERT_EQ(3,width);

}