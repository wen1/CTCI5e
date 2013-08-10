//
//  rotateString.h
//  chap1
//
//  Created by yi wen on 8/10/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//
#include <iostream>
#include <string>
using namespace std;
/* GIVEN: a string s & int index
 * EFFECT: s will be rotated at the index
 * EXAMPLES:
 * s = “abcde”
 * stringRotate(s, 2)  -> s = “cdeab”
 */
void stringRotate(string &s, int index);
void stringRotateInPlace(string &s, int index);