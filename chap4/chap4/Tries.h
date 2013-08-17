//
//  Tries.h
//  chap4
//
//  Created by yi wen on 8/16/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#ifndef _Tries_
#define _Tries_
#include <vector>
#include <iostream>
class Tries{
public:
    struct Node{
        char ch;
        std::vector<Node*> children;
        Node(char c): ch(c){};
    };
    
    Node* root;
    
};
#endif
