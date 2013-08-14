//
//  isPalindrome.cpp
//  chap2
//
//  Created by yi wen on 8/12/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "isPalindrome.h"

bool isPalindrome(LinkList* lst){
    for(int i = 0; i < lst->length/2; i++){
        int counterIndex = lst->length - 1 - i;
        if (lst->getAtIndex(i)!=lst->getAtIndex(counterIndex))
            return false;
    }
    return true;
}