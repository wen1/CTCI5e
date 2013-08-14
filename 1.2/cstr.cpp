//
//  cstr.cpp
//  chap1
//
//  Created by yi wen on 8/12/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "cstr.h"
int strLen(char* str){
    char* p = str;
    int length=0;
    while(*p){
        p++;
        length++;
    }
    return length;
}