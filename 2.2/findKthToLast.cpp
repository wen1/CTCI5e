//
//  findKthToLast.cpp
//  chap2
//
//  Created by yi wen on 8/10/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "findKthToLast.h"
#define Node LinkList::Node

int findKthToLast(LinkList* lst, int k){
    int count = k-1;
    // front is the first node of lst's sublist which lenght is k;
    Node* front = lst->head;
    // back is the last node of lst's sublist which length is k;
    Node* back = lst->head;
    while (count) {
        if (back == NULL) return NULL; // total length of lst < k
        back = back->next;
        count--;
    }
    while(back->next!=NULL){
        back = back->next;
        front = front->next;
    }
    return front->data;
}