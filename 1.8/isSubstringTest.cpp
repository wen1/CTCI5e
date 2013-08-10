//
//  isSubstringTest.cpp
//  chap1
//
//  Created by yi wen on 8/10/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//

#include "rotateString.h"
#include "isSubstring.h"
#include "gtest/gtest.h"
#include <iostream>
using namespace std;

/*
 * RETURN: true if s2 is a roated string of s1
 * EXAMPLES: isRotate("abcde","cdeab") => true
 */
//bool isRotate(string s1,string s2)

TEST(isSubstringTest, rotateString){
    string s = "abcde";
    stringRotateInPlace(s, 2);
    EXPECT_EQ("cdeab", s);
}

TEST(isSubstringTest, isSubstring){
    string s1 = "abcd;ajf;ad";
    string s2 = "ajf;";
    EXPECT_EQ(true, isSubstring(s1,s2));
}

TEST(isSubstringTest,isRotate){
    string s1 = "abcde";
    string s2 = "cdeab";
    EXPECT_EQ(true, isSubstring(s2.append((s2)),s1));

}
