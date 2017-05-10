//
// Created by youhei on 17/05/10.
//

#include <gtest/gtest.h>
#include <string_util.h>

TEST ( utf8 , count ) {

    std::string word = "おはよう";
    StringUtil strutil;
    int size = strutil.getSize(word);

    ASSERT_EQ(4, size);
}

TEST ( utf8 , charWidth ) {




}
