//
// Created by youhei on 17/05/09.
//

#include <gtest/gtest.h>

#include <unicode/uchar.h>
#include "TermMsg.h"

TEST(MsgTest, top)
{

  std::__cxx11::string msg = "勇者が現れた。";

  int height = 24;
  int width = 80;
  TermMsg tms (height, width, msg);

  ASSERT_TRUE(tms.flash ());

  tms.shake (10, 10, 10, 40);

}

TEST(StringTest, length)
{

  std::string ascii = "12345";
  std::string multibyte = "あいうえお";
  ASSERT_EQ(5, ascii.length ());
  ASSERT_EQ(15, multibyte.length ());

}

TEST(StringTest, length_uchar)
{
  UChar32 uc = L'1';
  int width = 0;
  char *name;
  UEastAsianWidth eaw = (UEastAsianWidth) u_getIntPropertyValue (uc, UCHAR_EAST_ASIAN_WIDTH);
  switch (eaw)
    {
      //全角文字
      case U_EA_WIDE:
      //全角文字
      case U_EA_FULLWIDTH:
        //文脈に依存(日本だと全角)
      case U_EA_AMBIGUOUS:
        width = 2;
        break;

      //半角文字
      case U_EA_HALFWIDTH:
      //半角文字
      case U_EA_NARROW:
      //普段アジアでは使わない文字(アラビア文字)-半角扱い
      case U_EA_NEUTRAL:
        width = 1;
        break;
    }
  ASSERT_EQ(1, width);
}