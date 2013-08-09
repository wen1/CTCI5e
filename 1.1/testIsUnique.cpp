//
//  testIsUnique.cpp
//  1.1
//
//  Created by yi wen on 8/9/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//


#include "isUnique.h"
#include "gtest/gtest.h"

TEST(IsUniqueTest, Uniqued) {
    EXPECT_EQ(true, isUnique("abc"));
    EXPECT_EQ(true, isUnique(""));
}

TEST(IsUniqueTest, unUniqued) {
    EXPECT_EQ(false, isUnique("aabc"));
    EXPECT_EQ(false, isUnique(";123;"));

}