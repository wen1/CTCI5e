//
//  isPermutation.cpp
//  chap1
//
//  Created by yi wen on 8/9/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "isPermutation.h"

bool isPermutation(string s1, string s2){
    if (s1.length()!=s2.length()) return false;
    
    int map[256];
    for (int i = 0; i < 256; i++){
        map[i] = 0;
    }
    
    for (int i = 0; i < s1.length(); i++){
        map[s1[i]]++;
    }
    for (int i = 0; i < s2.length(); i++){
        if (map[s2[i]] == 0)
            return false;
        else
            map[s2[i]]--;
    }
    
    return true;
}