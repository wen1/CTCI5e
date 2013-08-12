//
//  beginNodeOfLoop.cpp
//  chap2
//
//  Created by yi wen on 8/11/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "beginNodeOfLoop.h"

Node* beginNodeOfLoop(LinkList* lst){
    if (lst->head == NULL) return NULL;
    Node* p1 = lst->head->next;
    Node* p2 = p1->next;
    while(p1!=p2){
        p1 = p1->next;
        p2 = p2->next->next;
    }
    Node* p3 = lst->head;
    while(p3!=p1){
        p1 = p1->next;
        p3 = p3->next;
    }
    return p3;
}