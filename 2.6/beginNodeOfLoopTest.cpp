//
//  beginNodeOfLoopTest.cpp
//  chap2
//
//  Created by yi wen on 8/11/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "gtest/gtest.h"
#include "beginNodeOfLoop.h"
#include "LinkList.h"

TEST(beginNodeOfLoopTest, beginNode){
    LinkList* lst = new LinkList();
    int input[] = {1,2,3,4,5};
    for (int i = 0; i<5; i++){
        lst->addToTail(input[i]);
    }
    Node* loopNode = lst->head;
    int i = 2;
    while(i){
        loopNode = loopNode->next;
        i--;
    }
    lst->tail->next = loopNode;
    
    EXPECT_TRUE(loopNode == beginNodeOfLoop(lst));
    
}