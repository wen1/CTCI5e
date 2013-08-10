//
//  setZeros.h
//  chap1
//
//  Created by yi wen on 8/10/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//
#include <iostream>
/* Write an algorithm such that if an element in an MxN matrix is 0, 
 * its entire row and column are set to 0.
 */

/* GIVEN: a int** matrix & int row, col as the length of row and col
 * RETURN: a same int** matrix as the given one but all element in row and column of  element 0  will be set to 0
 * EXAMPLES:
 * matrix[][] = { {1,2,3},
 {0,5,6},
 {7,8,9}}
 * length = 3
 * setZeros(matrix) ->
 * matrix[][] = { {0,2,3},
 {0,0,0},
 {0,8,9}}
 */

void setZeros(int** matrix, int row, int col);