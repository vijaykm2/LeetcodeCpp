//
// Created by vijay on 5/22/20.
//

#include "PalindromeNumber.h"
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

bool PalindromeNumber::isPalindrome(int x) {
    if(x<0){
        return false;
    } else if(x<10){
        return true;
    } else{
        string string1 = to_string(x);
        string string2 = to_string(x);
        reverse(string2.begin(), string2.end());
        return string1==string2;
    }
}