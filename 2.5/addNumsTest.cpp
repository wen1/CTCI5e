//
//  addNumsTest.cpp
//  chap2
//
//  Created by yi wen on 8/11/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "LinkList.h"
#include "addNums.h"
#include "addReverseNums.h"
#include "gtest/gtest.h"
#include <iostream>
using namespace std;

//Input:(7->1->6) + (5->9->2).That is, 617 + 295.
//Output: 2->1->9.That is, 912.
TEST(addNumsTest, reverseNums){
    int n1[] = {7,1,6};
    int n2[] = {5,9,2};
    int n3[] = {2,1,9};
    LinkList* l1 = new LinkList();
    LinkList* l2 = new LinkList();
    LinkList* l3 = new LinkList();
    for (int i = 0; i<3; i++){
        l1->addToTail(n1[i]);
        l2->addToTail(n2[i]);
    }
    l3 = addReverseNums(l1, l2);
    for (int i = 0 ;i <l3->length; i++){
        EXPECT_EQ(n3[i], l3->getAtIndex(i));
    }
}
//Input:(7->1->6->9) + (5->9->4).That is, 6179 + 594.
//Output: 2->1->1->0->1.That is, 10112.
TEST(addNumsTest, reverseNums2){
    int n1[] = {7,1,6,9};
    int n2[] = {5,9,4};
    int n3[] = {2,1,1,0,1};
    LinkList* l1 = new LinkList();
    LinkList* l2 = new LinkList();
    LinkList* l3;
    for (int i = 0; i<4; i++){
        l1->addToTail(n1[i]);
    }
    for (int i = 0; i<3; i++){
        l2->addToTail(n2[i]);
    }
    l3 = addReverseNums(l1, l2);
    for (int i = 0 ;i <l3->length; i++){
        EXPECT_EQ(n3[i], l3->getAtIndex(i));
    }
}

//Input:(6->1->7) + (2->9->5). That is, 617 + 295.
//Output: 9->1->2.That is, 912
TEST(addNumsTest, nums){
    int n1[] = {6,1,7};
    int n2[] = {2,9,5};
    int n3[] = {9,1,2};
    LinkList* l1 = new LinkList();
    LinkList* l2 = new LinkList();
    LinkList* l3 = new LinkList();
    for (int i = 0; i<3; i++){
        l1->addToTail(n1[i]);
        l2->addToTail(n2[i]);
    }
    l3 = addNums(l1, l2);
    for (int i = 0 ;i <l3->length; i++){
        EXPECT_EQ(n3[i], l3->getAtIndex(i));
    }
}
//Input:(6->1->7->9) + (5->9->4). That is, 6179 + 594.
//Output: 9->1-> 2.That is, 912
TEST(addNumsTest, nums2){
    int n1[] = {4,7,9};
    int n2[] = {5,9,4};
    int n3[] = {1,0,7,3};
    LinkList* l1 = new LinkList();
    LinkList* l2 = new LinkList();
    LinkList* l3 = new LinkList();
    for (int i = 0; i<3; i++){
        l1->addToTail(n1[i]);
        l2->addToTail(n2[i]);
    }
    l3 = addNums(l1, l2);
    for (int i = 0 ;i <l3->length; i++){
        EXPECT_EQ(n3[i], l3->getAtIndex(i));
    }
}