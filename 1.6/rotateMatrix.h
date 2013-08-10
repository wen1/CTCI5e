//
//  rotateMatrix.h
//  chap1
//
//  Created by yi wen on 8/10/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//
/* Given an image represented by an NxN matrix, where each pixel in 
 * the image is 4 bytes, write a method to rotate the image by 90
 * degrees. Can you do this in place?
 */

/* GIVEN: a int** matrix & int length of each row and col
 * RETURN: a same int** matrix as the given one but rotated by 90 degree clockwise
 * EXAMPLES:
 * matrix[][] =
 * { {1,2,3},
 *   {4,5,6},
 *   {7,8,9}}
 * length = 3
 * rotate(matrix) ->
 * matrix[][] =
 * { {7,4,1},
 *   {8,5,2},
 *   {9,6,3}}
 */
void rotate(int** matrix, int length);