//
// Created by vijay on 5/22/20.
//

#include "RomanToInt.h"
#include <string>
#include <algorithm>

using namespace std;


int RomanToInt::romanToInt(string s) {
    int result = 0;
    int length = s.length();
    int i = 0;
    while(i<length){
        string charAtI=s.substr(i,1);
        string substr="";
        if(i+1<length){
            substr=s.substr(i,2);
        }
        if(substr == "IV" || substr == "IX" ||substr == "XL" ||substr=="XC" ||substr =="CD"||substr=="CM") {

            if(substr == "IV"){
                result +=4;
                i++;
            }else if (substr == "IX") {
                result += 9;
                i += 1;
            } else if (substr == "XL") {
                result += 40;
                i += 1;
            } else if (substr=="XC") {
                result += 90;
                i += 1;
            } else if (substr =="CD") {
                result += 400;
                i += 1;
            } else if (substr=="CM") {
                result += 900;
                i += 1;
            }
        } else if (charAtI == "I") {
            result += 1;
        } else if (charAtI == "X") {
            result += 10;
        } else if (charAtI == "V") {
            result += 5;
        } else if (charAtI == "L") {
            result += 50;
        } else if (charAtI == "C") {
            result += 100;
        } else if (charAtI =="D") {
            result += 500;
        } else if (charAtI =="M") {
            result += 1000;
        }
        i++;
    }
    return result;
}