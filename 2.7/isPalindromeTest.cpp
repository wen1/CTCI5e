//
//  isPalindromeTest.cpp
//  chap2
//
//  Created by yi wen on 8/12/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "isPalindrome.h"
#include "gtest/gtest.h"
#include "LinkList.h"

TEST(isPalindromeTest, isPalindrome){
    LinkList* lst = new LinkList();
    int input[] = {1,2,3,2,1};
    for (int i=0; i<sizeof(input)/sizeof(int); i++){
        lst->addToTail(input[i]);
    }
    EXPECT_EQ(true, isPalindrome(lst));
}