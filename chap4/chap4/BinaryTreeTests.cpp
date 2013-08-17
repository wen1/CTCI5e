//
//  BinaryTreeTests.cpp
//  chap4
//
//  Created by yi wen on 8/16/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include <iostream>
#include "BinaryTree.h"
#include "gtest/gtest.h"
#define Node BinaryTree::Node

TEST(BinaryTreeTests, InOrderTest){
    /*
         5
       2   6
     1   4
       3
     */
    BinaryTree* biTree = new BinaryTree();
    biTree->root = new Node(5);
    Node* p = biTree->root;
    p->left = new Node(2);
    p->right = new Node(6);
    p = p->left;
    p->left = new Node(1);
    p->right = new Node(4);
    p = p->right;
    p->left = new Node(3);
    biTree->size = 6;
    
    int result[] = {1,2,3,4,5,6};
    Node** inOrderP = biTree->traverseInOrder();
    for (int i = 0;i < biTree->size; i++){
        EXPECT_EQ(result[i], inOrderP[i]->data);
    }
    
}

TEST(BinaryTreeTests, PreOrderTest){
    /* 
         5
       2   6
     1   4
       3
     */
    BinaryTree* biTree = new BinaryTree();
    biTree->root = new Node(5);
    Node* p = biTree->root;
    p->left = new Node(2);
    p->right = new Node(6);
    p = p->left;
    p->left = new Node(1);
    p->right = new Node(4);
    p = p->right;
    p->left = new Node(3);
    biTree->size = 6;
    
    int result[] = {5,2,1,4,3,6};
    Node** preOrderP = biTree->traversePreOrder();
    for (int i = 0;i < biTree->size; i++){
        EXPECT_EQ(result[i], preOrderP[i]->data);
    }
    
}

TEST(BinaryTreeTests, PostOrderTest){
    /*
          5
        2   6
      1   4
        3
     */
    BinaryTree* biTree = new BinaryTree();
    biTree->root = new Node(5);
    Node* p = biTree->root;
    p->left = new Node(2);
    p->right = new Node(6);
    p = p->left;
    p->left = new Node(1);
    p->right = new Node(4);
    p = p->right;
    p->left = new Node(3);
    biTree->size = 6;
    
    int result[] = {1,3,4,2,6,5};
    Node** postOrderP = biTree->traversePostOrder();
    for (int i = 0;i < biTree->size; i++){
        EXPECT_EQ(result[i], postOrderP[i]->data);
    }
    
}