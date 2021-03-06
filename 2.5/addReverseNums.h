//
//  addReverseNums.h
//  chap2
//
//  Created by yi wen on 8/11/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "LinkList.h"
#define Node LinkList::Node
/*2.5
 
 You have two numbers represented by a linked list, where each
 node contains a single digit. The digits are stored in 
 reverse order, such that the Ts digit is at the head of the 
 list. Write a function that adds the two numbers and returns
 the sum as a linked list.
 
 EXAMPLE
 Input:(7->1-> 6) + (5->9->2).That is, 617 + 295.
 Output: 2->1-> 9.That is, 912.
  
 Attention: what about l1.length not equal to  l2.length
 */

LinkList* addReverseNums(LinkList* n1, LinkList* n2);