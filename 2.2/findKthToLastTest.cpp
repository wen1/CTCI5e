//
//  findKthToLastTest.cpp
//  chap2
//
//  Created by yi wen on 8/10/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//


#include "LinkList.h"
#include "gtest/gtest.h"
#include "findKthToLast.h"

TEST(findKthToLastTest, kthTest){
    LinkList* lst = new LinkList();
    lst->addToTail(1);
    lst->addToTail(2);
    lst->addToTail(3);
    lst->addToTail(4);
    lst->addToTail(5);
    EXPECT_EQ(4, findKthToLast(lst, 2));
}