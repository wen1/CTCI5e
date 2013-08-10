//
//  setZeorsTest.cpp
//  chap1
//
//  Created by yi wen on 8/10/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "gtest/gtest.h"
#include "setZeros.h"
#include "rotateMatrix.h"
TEST(setZerosTest, matrix){
    const int row = 3;
    const int col = 4;
    int** pmatrix = new int*[row];
    for (int i = 0; i<row; i++){
        pmatrix[i] = new int[col];
    }
    int matrix[row][col] = {
        {1,2,3,4},
        {5,0,7,8},
        {9,10,11,12}
    };
    for (int i = 0; i<row; i++){
        for (int j=0; j<col; j++){
            pmatrix[i][j] = matrix[i][j];
        }
    }
    int result[row][col] = {
        {1,0,3,4},
        {0,0,0,0},
        {9,0,11,12}
    };
    setZeros(pmatrix, row, col);
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            EXPECT_EQ(result[i][j], pmatrix[i][j]);
        }
    }
}

TEST(setZerosTest, oneMatrix){
    const int row = 1;
    const int col = 1;
    int** pmatrix = new int*[row];
    for (int i = 0; i<row; i++){
        pmatrix[i] = new int[col];
    }
    int matrix[row][col] = {
        {0}
    };
    for (int i = 0; i<row; i++){
        for (int j=0; j<col; j++){
            pmatrix[i][j] = matrix[i][j];
        }
    }
    int result[row][col] = {
        {0}
    };
    setZeros(pmatrix, row, col);
    
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            EXPECT_EQ(result[i][j], pmatrix[i][j]);
        }
    }

}
