//
//  LinkList.cpp
//  chap2
//
//  Created by yi wen on 8/10/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "LinkList.h"

LinkList::~LinkList(){
    while (head!=NULL) {
        Node* curr = head;
        head = head->next;
        delete curr;
    }
    //delete head;
}

void LinkList::addToTail(int d){
    if (head == NULL){
        head = new Node(d);
        tail = head;
        length++;
    } else {
        tail->next = new Node(d);
        tail = tail->next;
        length++;
    }
}

int LinkList::getAtIndex(int index){
    if (index >= length) return NULL;
    Node* p = head;
    while(index){
        p = p->next;
        index--;
    }
    return p->data;
}