//
//  addNums.h
//  chap2
//
//  Created by yi wen on 8/11/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "LinkList.h"
#define Node LinkList::Node
#include "addReverseNums.h"
/*
 FOLLOW UP
 Suppose the digits are stored in forward order. Repeat the
 above problem. 
 EXAMPLE
 Input:(6->1->7) + (2->9->5). That is, 617 + 295.
 Output: 9->1->2.That is, 912
 
 Attention: what about l1.length not equal to  l2.length
 */

LinkList* addNums(LinkList* n1, LinkList* n2);
void reverseLinkList(LinkList* lst);