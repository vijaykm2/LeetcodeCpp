//
// Created by vijay on 5/30/20.
//

#include "RemoveDuplicates.h"
#include <vector>
#include <algorithm>
using namespace std;
int RemoveDuplicates::removeDuplicates(vector<int> &nums) {
    int size = nums.size();
    if(size == 0){
        return 0;
    }
    int count = 0;
    for(int i=1; i<size; i++){
        if(nums[count]!=nums[i]){
            count++;
            nums[count]= nums[i];

        }
    }
    return ++count;
}
