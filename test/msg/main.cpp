//
// Created by youhei on 17/05/09.
//

#include <gtest/gtest.h>

#include "TermMsg.h"

TEST(MsgTest, top)
{

  std::__cxx11::string msg = "勇者が現れた。";

  int height = 24;
  int width = 80;
  TermMsg tms (height, width, msg);

  ASSERT_TRUE(tms.flash ());

  tms.shake ();

}

TEST(StringTest, length)
{

  std::string ascii = "12345";
  std::string multibyte = "あいうえお";
  ASSERT_EQ(5, ascii.length ());
  ASSERT_EQ(15, multibyte.length ());

}