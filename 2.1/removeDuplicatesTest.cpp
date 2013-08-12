//
//  removeDuplicatesTest.cpp
//  chap2
//
//  Created by yi wen on 8/10/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//


#include "LinkList.h"
#include "gtest/gtest.h"
#include "removeDuplicates.h"
TEST(removeDuplicatesTest, linkList){
    LinkList* lst = new LinkList();
    lst->addToTail(1);
    lst->addToTail(2);
    lst->addToTail(1);
    lst->addToTail(2);
    int result[] = {1,2,1,2};
    for (int i = 0; i < lst->length; i++){
        EXPECT_EQ(result[i], lst->getAtIndex(i));
    }
}

TEST(removeDuplicatesTest, removeDuplicates){
    LinkList* lst = new LinkList();
    lst->addToTail(1);
    lst->addToTail(2);
    lst->addToTail(1);
    lst->addToTail(2);
    int result[] = {1,2};
    removeDuplicates(lst);
    for (int i = 0; i < lst->length; i++){
        EXPECT_EQ(result[i], lst->getAtIndex(i));
    }
}

TEST(removeDuplicatesTest, removeDuplicates2){
    LinkList* lst = new LinkList();
    lst->addToTail(1);
    lst->addToTail(1);
    lst->addToTail(1);
    lst->addToTail(1);
    int result[] = {1};
    removeDuplicates(lst);
    for (int i = 0; i < lst->length; i++){
        EXPECT_EQ(result[i], lst->getAtIndex(i));
    }
}