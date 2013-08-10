//
//  reverse.cpp
//  1.2
//
//  Created by yi wen on 8/9/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "reverse.h"

void reverse(char* str){
    int len = NELEM(str);
    for (int i = 0; i < len/2; i++){
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}

int NELEM(char* str){
    int len = 0;
    while(*str != '\0'){
        len++;
        str++;
    }
    return len;
}