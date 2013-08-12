//
//  addReverseNums.cpp
//  chap2
//
//  Created by yi wen on 8/11/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "addReverseNums.h"

/*
 LinkList* addReverseNums(LinkList* n1, LinkList* n2){
    Node* p1 = n1->head;
    Node* p2 = n2->head;
    int carry = 0;
    while(p1!=NULL){
        int temp = p1->data + p2->data + carry;
        carry = temp/10;
        p2->data = temp%10;
        p1 = p1->next;
        p2 = p2->next;
    }
    return n2;
}
*/

LinkList* addReverseNums(LinkList* n1, LinkList* n2){
    Node* p1 = n1->head;
    Node* p2 = n2->head;
    LinkList* result = new LinkList();
    int carry = 0;
    int temp = 0;
    while(1){
        if(p1==NULL && p2==NULL){
            if (carry==1) result->addToTail(1);
            return result;
        } else if (p1 == NULL){
            temp = p2->data + carry;
        } else if (p2 == NULL){
            temp = p1->data + carry;
        } else {
            temp = p1->data + p2->data + carry;
        }
        carry = temp/10;
        result->addToTail(temp%10);
        p1 = p1 == NULL? p1 : p1->next;
        p2 = p2 == NULL? p2 : p2->next;
    }

}