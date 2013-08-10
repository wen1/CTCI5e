//
//  isSubstring.cpp
//  chap1
//
//  Created by yi wen on 8/10/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "isSubstring.h"

bool isSubstring(string s1, string s2){
    for (int i= 0; i<=s1.size()-s2.size();i++){
        int tempi = i;
        for (int j=0;;){
            if (j == s2.size()){
                return true;
            } else if (s1[tempi] == s2[j]){
                tempi++;
                j++;
            } else {
                break;
            }
        }
    }
    return false;
}

