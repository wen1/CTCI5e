//
//  reverseTest.cpp
//  1.2
//
//  Created by yi wen on 8/9/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "reverse.h"
#include "gtest/gtest.h"
#include "cstr.h"
#include <iostream>
TEST(reverseTest, emptyString) {
    char emptyStrBefore[] = {'\0'};
    char emptyStrAfter[] = {'\0'};
    reverse(emptyStrBefore);
    for (int i = 0; i < NELEM(emptyStrBefore)+1; i++) {
        EXPECT_EQ(emptyStrAfter[i], emptyStrBefore[i]);
    }
}

TEST(reverseTest, commonString) {
    char strBefore[] = "abc"; //{'a','b','c'};
    char strAfter[] = "cba"; //{'c','b','a'};
    
    reverse(strBefore);
    std::cout << NELEM(strBefore) << std::endl;
    for (int i = 0; i < NELEM(strBefore); i++){
        std::cout << strBefore[i] << " " << strAfter[i]<<std::endl ;
        EXPECT_EQ(strAfter[i],strBefore[i]);
    }
}

TEST(cstrTest, strlen){
    char *a = "abc";
    char b[] = "abcde";
    EXPECT_EQ(3, strLen(a));
    EXPECT_EQ(5, strLen(b));
}