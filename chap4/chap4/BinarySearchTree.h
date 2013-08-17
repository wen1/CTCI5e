//
//  BinarySearchTree.h
//  chap4
//
//  Created by yi wen on 8/16/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#ifndef _BinarySearchTree_
#define _BinarySearchTree_

#include <iostream>
#include "BinaryTree.h"
#define Node BinaryTree::Node

class BinarySearchTree:public BinaryTree{
public:
    void add(int d);
};


#endif 
