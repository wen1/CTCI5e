//
//  isPermutation.h
//  chap1
//
//  Created by yi wen on 8/9/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//
/* Question:
 * Given two strings, write a method to decide if one is a permutation of the other
 */

#include <string>
using namespace std;
/* GIVEN: two string s1 & s2
 * RETURN: true if s1 is a permutation of s2 or vice versa, otherwise return false
 * EXAMPLES:
 * isPermutation(“orchestra“,”carthorse“) -> true
 * isPermutation( “he is a coder”,”is he a coder”) -> true
 * isPermutation( “He”,”eh”) -> false
 * isPermutation( “old”,”dog”) -> false
 */

bool isPermutation(string s1, string s2);