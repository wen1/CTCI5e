//
//  isUnique.cpp
//  1.1
//
//  Created by yi wen on 8/9/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "isUnique.h"

bool isUnique(string s){
    bool visited[256];
    for ( int i = 0; i < 256; i++){
        visited[i] = 0;
    }
    for (int i = 0; i< s.size(); i++){
        if(visited[s[i]] != false)
            return false;
        else
            visited[s[i]] = true;
    }
    return true;
}
