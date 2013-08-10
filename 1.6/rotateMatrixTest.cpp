//
//  rotateMatrixTest.cpp
//  chap1
//
//  Created by yi wen on 8/10/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//
#include "rotateMatrix.h"
#include "gtest/gtest.h"
#include <iostream>
using namespace std;
void print(int**,int);

TEST(rotateTest, threeMatrix) {
    const int length = 3;
    int** pmatrix = new int*[length];
    for (int i = 0; i < length; i++){
        pmatrix[i] = new int[length];
    }
    int matrix[][length]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int result[][length]={
        {7,4,1},
        {8,5,2},
        {9,6,3}
    };
    
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            pmatrix[i][j] = matrix[i][j];
        }
    }
    
    rotate(pmatrix, length);
    
    for (int i = 0; i<length; i++){
        for (int j = 0; j<length; j++){
            EXPECT_EQ(result[i][j], pmatrix[i][j]);
        }
    }
}

TEST(rotateTest, fourMatrix) {
    const int length = 4;
    int** pmatrix = new int*[length];
    for (int i = 0; i < length; i++){
        pmatrix[i] = new int[length];
    }
    int matrix[][length] \
    =  {{1,2,3,4},\
        {5,6,7,8},\
        {9,10,11,12},\
        {13,14,15,16} };
    int result[][length] \
    = { {13,9,5,1}, \
        {14,10,6,2}, \
        {15,11,7,3}, \
        {16,12,8,4} };
    
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            pmatrix[i][j] = matrix[i][j];
        }
    }
    
    rotate(pmatrix, length);
    
    for (int i = 0; i<length; i++){
        for (int j = 0; j<length; j++){
            EXPECT_EQ(result[i][j], pmatrix[i][j]);
        }
    }
}

TEST(rotateTest, oneMatrix) {
    const int length = 1;
    int** pmatrix = new int*[length];
    for (int i = 0; i < length; i++){
        pmatrix[i] = new int[length];
    }
    int matrix[][length] \
    =  {{1}};
    int result[][length] \
    = {{1}};
    
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            pmatrix[i][j] = matrix[i][j];
        }
    }
    
    rotate(pmatrix, length);
    
    for (int i = 0; i<length; i++){
        for (int j = 0; j<length; j++){
            EXPECT_EQ(result[i][j], pmatrix[i][j]);
        }
    }
}


void print(int** pm, int len){
    for (int i=0; i<len; i++) {
        for (int j=0; j<len; j++) {
            cout << pm[i][j] << " ";
            if (j == len-1)cout << endl;
        }
    }
}