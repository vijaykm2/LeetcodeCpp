//
// Created by vijay on 5/21/20.
//

#include "ReverseInteger.h"
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
int ReverseInteger::reverse(int x) {
    if(x>=0&& x<10){
        return x;
    }
    string copy(to_string(x));
  //  cout<<"s = "<<copy<<"\n";
    std::reverse(copy.begin(), copy.end());
    int result = 0;
    try{
        result = stoi(copy);
    } catch (...) {
        result = 0;
    }
    if(x<0){
        result *=-1;
    }
    return result;
}