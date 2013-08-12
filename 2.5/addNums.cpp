//
//  addNums.cpp
//  chap2
//
//  Created by yi wen on 8/11/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "addNums.h"

// condition: the linklist hasn't "pre" for each node and the length field;
// only use single extra space, like int node*

/* LinkList* addNums(LinkList* n1, LinkList* n2){
    // use n2 as the result list
    Node* p1 = n1->head;
    Node* p2 = n2->head;
    int count = 0;
    int carry = 0;
    while(p1!=NULL){
        p1 = p1->next;
        p2 = p2->next;
        count++;
    }
    while (count) {
        int i = count;
        p1 = n1->head;
        p2 = n2->head;
        while(i-1){
            p1 = p1->next;
            p2 = p2->next;
            i--;
        }
        int temp = (p1->data + p2->data + carry);
        carry = temp / 10;
        p2->data = temp %10;
        count--;
    }
    return n2;
}
 */

LinkList* addNums(LinkList* n1, LinkList* n2){
    reverseLinkList(n1);
    reverseLinkList(n2);
    LinkList* result = addReverseNums(n1, n2);
    reverseLinkList(result);
    return result;
}

void reverseLinkList(LinkList* lst){
    Node* pre = NULL;
    Node* p = lst->head;
    lst->tail = lst->head;
    while (p!=NULL) {
        Node* next = p->next;
        p->next = pre;
        pre = p;
        p = next;
    }
    lst->head = pre;
}