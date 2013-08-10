//
//  replaceSpacesTest.cpp
//  chap1
//
//  Created by yi wen on 8/9/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "replaceSpaces.h"
#include "gtest/gtest.h"

TEST(replaceSpacesTest, basicString){
    char s[] = {'a', 'b', ' ', 'c', ' ','\0','\0','\0','\0','\0'};
    int length = 5;
    replaceSpaces(s, length);
    char result[] = {'a', 'b', '%', '2', '0', 'c', '%', '2', '0', '\0'};
    for (int i = 0; i < sizeof(result)/sizeof(result[0]); i++){
        EXPECT_EQ(result[i], s[i]);
    }
}