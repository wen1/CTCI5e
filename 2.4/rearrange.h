//
//  rearrange.h
//  chap2
//
//  Created by yi wen on 8/11/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//
#include "LinkList.h"
#define Node LinkList::Node
/*2.4
 Write code to partition a linked list around a value x, 
 such that all nodes less than x come before all nodes 
 greater than or equal to x.
 */
/*
 GIVEN: a LinkList lst & int x
 EFFECT: the same lst but all nodes less than x come before 
 all nodes greater than or equal to x.
 EXAMPLE:
 input: lst= 9->3->7->1->6->5->2->8,  x = 4
 output: lst= 3->1->2->9->7->6->5->8
 
 */

void rearrange(LinkList* lst, int x);