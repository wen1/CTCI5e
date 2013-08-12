//
//  LinkList.h
//  chap2
//
//  Created by yi wen on 8/10/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//
#ifndef LINKLIST
#define LINKLIST // interesting
#include <iostream>
using namespace std;

class LinkList{
public:
    struct Node{
        int data;
        Node* next;
        Node(int d): data(d),next(NULL){};
    };
    Node* head;
    Node* tail;
    int length;
    
    LinkList():head(NULL),tail(NULL),length(0){};
    ~LinkList();
    void addToTail(int d);
    int getAtIndex(int index);
};

#endif