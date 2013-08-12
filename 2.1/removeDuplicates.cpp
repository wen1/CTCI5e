//
//  removeDuplicates.cpp
//  chap2
//
//  Created by yi wen on 8/10/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "removeDuplicates.h"
#define Node LinkList::Node

// need to improve the algorithm, now take O(n^2)
void removeDuplicates(LinkList* lst){
    Node* p = lst->head;
    while(p!=NULL){
        Node* q = p->next;
        Node* pre = p;
        while (q!=NULL) {
            if (q->data == p->data){
                pre->next = q->next;
                delete q;
                q = pre->next;
                lst->length--;
            } else {
                q = q->next;
                pre = pre->next;
            }
        }
        p = p->next;
    }
}