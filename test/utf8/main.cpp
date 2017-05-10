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

    setlocale( LC_CTYPE, "jpn" );
    std::string word = "あいうえお";

    StringUtil strutil(word);
    strutil.getAsianWidth();

    int charcode = strutil.get_char_code("あ");

    ASSERT_EQ((unsigned int)'あ', charcode);

    std::string a = "あ";
    const char* chars = a.c_str();



    char s[] = "あいうえお";
    char us[] = u8"あいうえお";

    std::cout << std::hex << chars[0] << std::endl;
    std::cout << std::hex << chars[1] << std::endl;
    std::cout << std::hex << chars[2] << std::endl;

    std::u32string u32str = U"あいうえお";

    int size = sizeof(s);
    int usize = sizeof(s);
    std::cout << s << std::endl;
    std::cout << size << std::endl;

    std::cout << us << std::endl;
    std::cout << usize << std::endl;

    std::cout << u32str.size() << std::endl;



//    ASSERT_EQ( ,charcode);
//    int width = strutil.getAsianWidth();
//
//    ASSERT_EQ(3,width);

}
