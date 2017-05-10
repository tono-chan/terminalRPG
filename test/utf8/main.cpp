//
// Created by youhei on 17/05/10.
//

#include <gtest/gtest.h>
#include <string_util.h>
#include <east_width_asian.h>
#include <codecvt>
#include <locale>
#include <string>
#include <iostream>




TEST ( utf8 , count ) {

    std::string word = "おはよう";
    StringUtil strutil(word);
    int size = strutil.getSize();

    ASSERT_EQ(4, size);
}

TEST ( utf8 , charWidth ) {
    std::string word = "あいうえおaiueo";
    StringUtil stringUtil(word);
    int width = stringUtil.getAsianWidth();
    ASSERT_EQ( 15, width );
}

TEST( utf8 , sandbox ) {

    setlocale( LC_CTYPE, "jpn" );
    std::string word = "あいうえお";

    StringUtil strutil(word);
//    ASSERT_EQ(10, strutil.getAsianWidth());

    int charcode = strutil.get_char_code("あ");

    ASSERT_EQ((unsigned int)'あ', charcode);

    std::string a = "あ";
    const char* chars = a.c_str();

    char32_t  a16 = U'あ';
    int a32charcode = (int)a16;
    std::cout << "utf16(あ):" <<std::hex << a32charcode << std::endl;

    std::string aiueo = "あいうえお";
    std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter;

    std::u32string u32aiueo = converter.from_bytes(aiueo);

    int u32 = (int)u32aiueo[0];
    int utf8 = (int)a[0];

    std::cout << "utf16(あ):" <<std::hex << u32 << std::endl;
    std::cout << "utf16(あ):" <<std::hex << utf8 << std::endl;

    aiueo = converter.to_bytes(u32aiueo);





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