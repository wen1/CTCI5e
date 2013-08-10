//
//  rotateMatrix.cpp
//  chap1
//
//  Created by yi wen on 8/10/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "rotateMatrix.h"
void rotate(int** matrix, int length){
    int layer = length/2;
    for (int i = 0; i < layer; i++){ // i is current layer
        
        int first = i;
        int last = length-i-1; // index of last elem
        
        for (int j = first; j < last; j++){ //j is current offset
            
            int top = matrix[i][j]; // top
            int offset = last-(j-first);
            
            // left->top
            matrix[i][j] = matrix[offset][i];
            // bottom->left
            matrix[offset][i] = matrix[last][offset];
            // right->bottom
            matrix[last][offset] = matrix[j][last];
            // top->left
            matrix[j][last] = top;
        }
    }
}