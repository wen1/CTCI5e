//
//  reverseTest.cpp
//  1.2
//
//  Created by yi wen on 8/9/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "reverse.h"
#include "gtest/gtest.h"

TEST(reverseTest, emptyString) {
    char emptyStrBefore[] = {'\0'};
    char emptyStrAfter[] = {'\0'};
    reverse(emptyStrBefore);
    for (int i = 0; i < NELEM(emptyStrBefore)+1; i++) {
        EXPECT_EQ(emptyStrAfter[i], emptyStrBefore[i]);
    }
}

TEST(reverseTest, commonString) {
    char strBefore[] = {'a','b','c','\0'};
    char strAfter[] = {'c','b','a','\0'};
    reverse(strBefore);
    for (int i = 0; i < NELEM(strBefore)+1; i++){
        EXPECT_EQ(strAfter[i],strBefore[i]);
    }
}