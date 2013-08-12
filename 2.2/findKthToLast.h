//
//  findKthToLast.h
//  chap2
//
//  Created by yi wen on 8/10/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "LinkList.h"

/*2.2
 Implement an algorithm to find the kth to last element of 
 a singly linked list.
 */

/*
 GIVEN: a LinkList* lst & int k
 RETURN: the kth to last element of a singly linked list
 EXAMPLES:
 lst:[1] -> [2] -> [3]->[4]->[5]->[6]
 findKthToLast(lst, 2) => 5
 */

int findKthToLast(LinkList* lst, int k);