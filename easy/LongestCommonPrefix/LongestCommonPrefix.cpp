//
// Created by vijay on 5/23/20.
//
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class LongestCommonPrefix {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0){
            return "";

        }
        string shortest= strs[0];
        for(int i = 1; i<strs.size();i++){
            if(shortest.length()>strs[i].length()){
                shortest = strs[i];
            }
        }
        string longestPrefix="";
        for(int i=shortest.length();i>=0;i--){
            string substr = shortest.substr(0,i);
            bool found = true;
            for(int j = 0; j<strs.size();j++){
                if(strs[j].find(substr, 0) == 0){
                    found &=true;
                } else {
                    found &=false;
                }
            }
            if(found){
                longestPrefix = substr;
                break;
            }
        }
        return longestPrefix;
    }
};