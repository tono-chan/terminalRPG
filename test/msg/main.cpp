//
// Created by youhei on 17/05/09.
//

#include <gtest/gtest.h>

#include "term_msg.h"

TEST( MsgTest , top ) {

    std::__cxx11::string msg = "勇者が現れた。";

    int height = 24;
    int width = 80 ;
    TermMsg tms(  height ,  width , msg );
    ASSERT_TRUE(tms.flash());


}
