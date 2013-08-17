//
//  BinarySearchTree.cpp
//  chap4
//
//  Created by yi wen on 8/16/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "BinarySearchTree.h"


void BinarySearchTree::add(int d){
    Node* p = this->root;
    Node* pre = NULL;
    while(p!=NULL){
        pre = p;
        if (d < p->data){
            p = p->left;
        } else {
            p = p->right;
        }
    }
    if (pre == NULL){
        this->root = new Node(d);
    } else if (pre->left == p){
        pre->left = new Node(d);
    } else {
        pre->right = new Node(d);
    }
    this->size++;
}