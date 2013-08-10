//
//  setZeros.cpp
//  chap1
//
//  Created by yi wen on 8/10/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "setZeros.h"
void setZeros(int** matrix, int row, int col){
    bool* rowCheck = new bool[row];
    bool* colCheck = new bool[col];

    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if (matrix[i][j] == 0){
                rowCheck[i] = true;
                colCheck[j] = true;
            }
        }
    }
    for (int i = 0; i<row; i++){
        for (int j=0; j<col; j++){
            if (rowCheck[i] || colCheck[j])
                matrix[i][j] = 0;
        }
    }
}