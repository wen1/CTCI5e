//
//  replaceSpaces.cpp
//  chap1
//
//  Created by yi wen on 8/9/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "replaceSpaces.h"

void replaceSpaces(char s[], int length){
    char* p = s;
    int nSpace = 0;
    while(*p != '\0'){
        if (*p == ' ') nSpace++;
        p++;
    }
    p--;
    int index = length+nSpace*2;
    s[index] = '\0';
    index--;
    
    while (index > 0) {
        if (*p == ' '){
            s[index] = '0';
            s[--index] = '2';
            s[--index] = '%';
        } else {
            s[index] = *p;
        }
        p--;
        index--;
    }
}