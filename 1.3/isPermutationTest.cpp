//
//  isPermutationTest.cpp
//  chap1
//
//  Created by yi wen on 8/9/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "gTest/gtest.h"
#include "isPermutation.h"

TEST(isPermutationTest, permutation){
    EXPECT_EQ(true, isPermutation("orchestra","carthorse"));
    EXPECT_EQ(true, isPermutation( "he is a coder","is he a coder"));
}

TEST(isPermutationTest, unPermutation){
    EXPECT_EQ(false, isPermutation( "He","eh"));
    EXPECT_EQ(false, isPermutation( "old","dog"));
}