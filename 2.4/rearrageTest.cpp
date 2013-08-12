//
//  rearrageTest.cpp
//  chap2
//
//  Created by yi wen on 8/11/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//
#include "LinkList.h"
#include "rearrange.h"
#include "gtest/gtest.h"

TEST(rearrangeTest, rearrage){
    LinkList* lst = new LinkList();
    int input[] = {9,3,7,1,6,5,2,8};
    int result[] = {2,1,3,9,7,6,5,8};
    for (int i = 0; i < 8; i++){
        lst->addToTail(input[i]);
    }
    rearrange(lst, 4);
    for (int i = 0; i < lst->length; i++){
        EXPECT_EQ(result[i], lst->getAtIndex(i));
    }
    
}
TEST(rearrangeTest, rearrageOneElement){
    LinkList* lst = new LinkList();
    int input[] = {3};
    int result[] = {3};
    for (int i = 0; i < 1; i++){
        lst->addToTail(input[i]);
    }
    rearrange(lst, 4);
    for (int i = 0; i < lst->length; i++){
        EXPECT_EQ(result[i], lst->getAtIndex(i));
    }
    
}