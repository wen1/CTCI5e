//
//  replaceSpaces.h
//  chap1
//
//  Created by yi wen on 8/9/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//
/* Write a method to replace all spaces in a string with’%20′. 
 * You may assume that the string has sufficient space at the end of the string 
 * to hold the additional characters, and that you are given the “true” length 
 * of the string. (Note: if implementing in Java, please use a character 
 * array so that you can perform this operation in place.)
 */

/* GIVEN: a char[] s & an int length of s
 * EFFECT: replace all the spaces in s with %20
 * EXAMPLES:
 * s = {‘a’, ‘b’, ‘ ‘, ‘c’, ‘ ‘, ”,”,”,”,”}, length = 5
 * replaceSpaces(s, length) results
 * s = {‘a’, ‘b’, ‘%’, ’2′, ’0′, ‘c’, ’%', ’2′, ’0′, ”}
 */
void replaceSpaces(char s[], int length);