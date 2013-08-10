//
//  compressTest.cpp
//  chap1
//
//  Created by yi wen on 8/9/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "compress.h"
#include "gtest/gtest.h"

TEST(compressTest, stringCompress){
    EXPECT_STREQ("a2b1c5a3", compress("aabcccccaaa").c_str());
    EXPECT_STREQ("abc", compress("abc").c_str());
    EXPECT_STREQ("", compress("").c_str());
}