//
//  removeDuplicates.h
//  chap2
//
//  Created by yi wen on 8/10/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//
#ifndef REMOVE_DUPLICATES
#define REMOVE_DUPLICATES

#include "LinkList.h"
/*1.1
 Write code to remove duplicates from an unsorted linked list.
 FOLLOW UP
 How would you solve this problem if a temporary buffer is not 
 allowed?
 */

/*
 GIVEN: a Linklist list
 RETURN: a Linklist without duplicates
 EXAMPLES:
 lst: [1] -> [2] -> [1]
 removeDuplicates(head);
 results: lst: [1] -> [2]
 */

void removeDuplicates(LinkList* lst);

#endif