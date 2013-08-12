//
//  rotateString.cpp
//  chap1
//
//  Created by yi wen on 8/10/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "rotateString.h"

void stringRotate(string &s, int index){
    string tempStr;
    for (int i = index; i<s.size();i++){
        tempStr.push_back(s[i]);
    }
    for (int i = 0; i<index; i++){
        tempStr.push_back(s[i]);
    }
    for (int i=0; i<s.size(); i++){
        s[i] = tempStr[i];
    }
}

void stringRotateInPlace(string &s, int index){
    int length = (int)s.size();
    int offset = length - index;
    
    int i = length-1;
    char temp = s[i];
    
    do{
        int nextIndex = i-offset;
        nextIndex = (nextIndex>=0? nextIndex : nextIndex+length);
        if (nextIndex == length-1){
            s[i] = temp;
        } else {
            s[i] = s[nextIndex];
        }
        i = nextIndex;
    }while(i != length-1);
}