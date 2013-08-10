//
//  compress.cpp
//  chap1
//
//  Created by yi wen on 8/9/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "compress.h"
#include <iostream>

string compress(string s){
    if (s.empty()) return s;
    
    char preChar = s[0];
    int count = 1;
    string result;
    for (int i = 1; i<s.length(); i++){
        if (s[i] == preChar){
            count++;
        } else {
            result.push_back(preChar);
            result.push_back(count+'0');
            count = 1;
        }
        preChar = s[i];
    }
    result.push_back(preChar);
    result.push_back(count+'0');
        
    if (result.length() == 2 * s.length()){
        return s;
    } else {
        return result;
    }
}