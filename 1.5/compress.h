//
//  compress.h
//  chap1
//
//  Created by yi wen on 8/9/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//
#include <string>
using namespace std;
/* Implement a method to perform basic string compression using the counts of 
 * repeated characters. For example, the string aabcccccaaa would become a2blc5a3. 
 * If the “compressed” string would not become smaller than the original string, 
 * your method should return the original string.
 */

/* GIVEN: a string s
 * RETURN: a string after compression
 * EXAMPLES:
 * compress(“aabcccccaaa”) -> “a2blc5a3″
 * compress(“abc”) -> “abc”
 */

string compress(string s);