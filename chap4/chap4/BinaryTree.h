//
//  BinaryTree.h
//  chap4
//
//  Created by yi wen on 8/16/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#ifndef _BinaryTree_
#define _BinaryTree_

#include <iostream>


class BinaryTree{
public:
    struct Node{
        int data;
        Node* left;
        Node* right;
        
        Node(int d):data(d),left(NULL),right(NULL){};
    };
    
    Node* root;
    int height;
    int size;
    
    Node** traverseInOrder();
    
    Node** traversePreOrder();
    
    Node** traversePostOrder();
};



#endif /* defined(_BinaryTree_) */
