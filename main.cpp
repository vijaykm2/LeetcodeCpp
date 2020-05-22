#include <iostream>
#include <vector>
#include "easy/TwoSum/TwoSum.h"
#include "easy/ReverseInteger/ReverseInteger.h"
#include "easy/PalindromeNumber/PalindromeNumber.h"

using namespace std;
void twoSum(){
    TwoSum twoSum ;
    vector<int> nums= {2,7,11,15, 44, 76, 97, 0, 66};
    int target = 22;
    vector<int> result = twoSum.twoSum(nums, target);
    cout<<"twosum result = ";
    for(vector<int>::iterator itr=result.begin(), end=result.end();itr!=end;itr++){
        cout<<*itr<<", ";
    }
    cout<<"\n";
}

void reverseInteger(){
    ReverseInteger reverseInteger;
    int num = 1534236469;
    cout<< "reverseInteger of"<<num<<" = \n";
    int result = reverseInteger.reverse(num);
    cout<<"reverse  = "<<result<<"\n";
}
void palindromeNumber(){
    PalindromeNumber palindromeNumber1;
    int num = 1;
    cout<<"inside palindromeNumber: \n";
    bool result = palindromeNumber1.isPalindrome(num);
    cout<<"is palindrome "<<num<<"= "<<result<<"\n";
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    twoSum();
    reverseInteger();
    palindromeNumber();

    return 0;
}
