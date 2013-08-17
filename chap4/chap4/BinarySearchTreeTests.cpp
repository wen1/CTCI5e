//
//  BinarySearchTreeTests.cpp
//  chap4
//
//  Created by yi wen on 8/16/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "BinarySearchTree.h"
#include "gtest/gtest.h"

TEST(BinarySearchTreeTests, add){
    /*
         5
       2   6
     1   4
       3
     */
    BinarySearchTree* bst = new BinarySearchTree();
    int input[] = {5,2,6,1,4,3};
    int inOrder[] = {1,2,3,4,5,6};
    for (int i = 0; i<6;i++){
        bst->add(input[i]);
    }
    bst->size = 6;
    
    Node** array = bst->traverseInOrder();
    for (int i = 0;i < bst->size; i++){
        EXPECT_EQ(inOrder[i], array[i]->data);
    }

}
