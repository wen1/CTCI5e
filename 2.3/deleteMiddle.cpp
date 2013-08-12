//
//  deleteMiddle.cpp
//  chap2
//
//  Created by yi wen on 8/11/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "deleteMiddle.h"
// can not change the head and tail pointer or length of the linklist
void deleteMiddleNode(Node* middle){
    Node* afterMiddle = middle->next;
    if(afterMiddle == NULL){ 
        delete middle;
    } else {
        middle->data = afterMiddle->data;
        middle->next = afterMiddle->next;
        delete afterMiddle;
    }
}