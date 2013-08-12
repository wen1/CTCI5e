//
//  beginNodeOfLoop.h
//  chap2
//
//  Created by yi wen on 8/11/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//
#include "LinkList.h"
#define Node LinkList::Node
/* 2.6
 Given a circular linked list, implement an algorithm which 
 returns the node at the beginning of the loop.
DEFINITION
Circular linked list: A (corrupt) linked list in which a 
 node's next pointer points to an earlier node, so as to make 
 a loop in the linked list.

EXAMPLE
Input:1->2->3->4->5->3[the same 3 as earlier]
Output:3
*/

Node* beginNodeOfLoop(LinkList* lst);