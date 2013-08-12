//
//  deleteMiddle.h
//  chap2
//
//  Created by yi wen on 8/11/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "LinkList.h"
#define Node LinkList::Node
/*2.3
 
 Implement an algorithm to delete a node in the middle of 
 a singly linked list, given only access to that node.
 
 EXAMPLE
 Input: the node c from the linked list a->b->c->d->e
 Result: nothing is returned, but the new linked list
 looks like a- >b- >d->e
 
 */

void deleteMiddleNode(Node* middle);