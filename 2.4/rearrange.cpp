//
//  rearrange.cpp
//  chap2
//
//  Created by yi wen on 8/11/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "rearrange.h"

void rearrange(LinkList* lst, int x){
    Node* cp = lst->head;
    Node* np;
    lst->tail = lst->head;
    while(cp!=NULL){
        np = cp->next;
        if (cp->data < x){
            cp->next = lst->head;
            lst->head = cp;
        } else {
            lst->tail->next = cp;
            lst->tail = cp;
        }
        cp = np;
    }
}