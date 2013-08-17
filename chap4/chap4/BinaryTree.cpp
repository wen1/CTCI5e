//
//  BinaryTree.cpp
//  chap4
//
//  Created by yi wen on 8/16/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "BinaryTree.h"
#define Node BinaryTree::Node

void traverseInOrderHelper(Node* p, Node** acc, int &i){
    if(p==NULL) return;
    traverseInOrderHelper(p->left, acc,i);
    acc[i++] = p;
    traverseInOrderHelper(p->right,acc,i);
}

Node** BinaryTree::traverseInOrder(){
    Node** acc = new Node*[this->size];
    int accIndex = 0;
    traverseInOrderHelper(this->root,acc,accIndex);
    return acc;
}

void traversePreOrderHelper(Node* p, Node** acc, int &i){
    if(p==NULL) return;
    acc[i++] = p;
    traversePreOrderHelper(p->left, acc,i);
    traversePreOrderHelper(p->right,acc,i);
}

Node** BinaryTree::traversePreOrder(){
    Node** acc = new Node*[this->size];
    int accIndex = 0;
    traversePreOrderHelper(this->root,acc,accIndex);
    return acc;
}

void traversePostOrderHelper(Node* p, Node** acc, int &i){
    if(p==NULL) return;
    traversePostOrderHelper(p->left, acc,i);
    traversePostOrderHelper(p->right,acc,i);
    acc[i++] = p;
}

Node** BinaryTree::traversePostOrder(){
    Node** acc = new Node*[this->size];
    int accIndex = 0;
    traversePostOrderHelper(this->root,acc,accIndex);
    return acc;
}

