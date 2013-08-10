//
//  main.cpp
//  1.2
//
//  Created by yi wen on 6/30/13.
//  Copyright (c) 2013 yi wen. All rights reserved.
//
//  Write code to reverse a C-Style String
//  (C-String means that “abcd” is represented as
//  five characters, including the null character )

#include <iostream>
#include <string>
#include "gtest/gtest.h"

int main(int argc, char* argv[]){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

//int main(int argc, const char * argv[])
//{
//    ifstream file("input");
//    while (!file.eof()) {
//        string line;
//        getline(file,line);
//        if(line.size()==0) {
//            continue;
//        } else {
//            char* cstrline = new char[line.size()];
//            strcpy(cstrline, line.c_str());
//            char* rcline = reverseCstr(cstrline,line.size());
//            for (int i = 0; i < line.size(); i++)
//                cout << rcline[i];
//            cout << endl;
//        }
//    }
//    return 0;
//}
//
//char* reverseCstr(char* cstr,int len){
//    for (int i = 0; i < len/2; i++){
//        // swap 
//        swap(cstr[i], cstr[len-i-1]);
//    }
//    return cstr;
//}