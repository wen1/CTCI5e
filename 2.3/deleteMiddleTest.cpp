//
//  deleteMiddleTest.cpp
//  chap2
//
//  Created by yi wen on 8/11/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//


#include "deleteMiddle.h"
#include "LinkList.h"
#include "gtest/gtest.h"

TEST(deleteMiddleTest, deleteMiddle){
    LinkList* lst = new LinkList();
    lst->addToTail(1);
    lst->addToTail(2);
    lst->addToTail(3);
    Node* middle = lst->tail;
    lst->addToTail(4);
    lst->addToTail(5);
    deleteMiddleNode(middle);
    int result[] = {1,2,4,5};
    Node* pnode = lst->head;
    int i = 0;
    while(pnode!=NULL){
        EXPECT_EQ(result[i], pnode->data);
        i++;
        pnode = pnode->next;
    }
}
/* the linklist should has at least three nodes
TEST(deleteMiddleTest, deleteOne){
    LinkList* lst = new LinkList();
    lst->addToTail(1);
    Node* middle = lst->tail;
    deleteMiddleNode(middle);
    EXPECT_EQ(NULL,lst->head);
}
*/