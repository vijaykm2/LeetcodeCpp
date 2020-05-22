//
// Created by vijay on 5/20/20.
//

#include "TwoSum.h"
#include "stdlib.h"
#include "iostream"
#include<vector>

using namespace std;

std::vector<int> TwoSum::twoSum(std::vector<int>& nums, int target) {
    vector<int> *result = new vector<int>();
    bool found = false;
    for(int i=0;i<nums.size();i++){
        for(int j=nums.size()-1;j>i;j--){
            if(nums[i]+nums[j]==target){
                result->push_back(i);
                result->push_back(j);
                found = true;
                break;
            }

        }
        if(found){
            break;
        }
    }
    return *result;
}
