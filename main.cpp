#include <iostream>
#include <vector>
#include "easy/TwoSum/TwoSum.h"
#include "easy/ReverseInteger/ReverseInteger.h"
#include "easy/PalindromeNumber/PalindromeNumber.h"
#include "easy/LongestCommonPrefix/LongestCommonPrefix.cpp"
#include "easy/RomanToInt.h"
#include "easy/ValidParenthesis.cpp"
#include "easy/MergeTwoSortedLists.h"
#include "RemoveDuplicates.h"

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
void romanToInt(){
    cout << "Executing romanToInt\n";
    RomanToInt romanToInt1;
    string string1 = "LVIII";
    int result = romanToInt1.romanToInt(string1);
    cout<< "roman toint of "<< string1<< " = "<< result<<"\n";
}
void longestPrefix() {
    cout<<"Executing longestprefix: \n";
    LongestCommonPrefix longestprefix;
    vector<string> strs = {"abc", "abcd"};
    string result = longestprefix.longestCommonPrefix(strs);
    cout << result<<endl;
}
void validParens(){
    ValidParenthesis validParenthesis;
    bool isValid = validParenthesis.isValid("{}");
    cout << "paren {} is: "<< isValid<<"\n";
     isValid = validParenthesis.isValid("(]");
    cout << "paren (] is: "<< isValid<<"\n";
     isValid = validParenthesis.isValid("{[]}");
    cout << "paren {[]} is: "<< isValid<<"\n";
     isValid = validParenthesis.isValid("((");
    cout << "paren {[]} is: "<< isValid<<"\n";
     isValid = validParenthesis.isValid("){");
    cout << "paren ){ is: "<< isValid<<"\n";

}
ListNode* createListNode(vector<int> values){
    ListNode result;
    ListNode* resultNext = &result;
    for(vector<int>::iterator itr = values.begin();itr!=values.end();++itr){
        resultNext->next = new ListNode(*itr);
        resultNext = resultNext ->next;
    }
    return result.next;
}

void merge2Lists(){
    MergeTwoSortedLists merge2Lists;
    ListNode* l1 = createListNode({1,2,4});
    ListNode* l2 = createListNode({1,3,4}) ;
    ListNode* result = merge2Lists.mergeTwoLists(l1, l2);
    cout << "\nMerged 2 lists \n";
}
void removeDuplicates(){
    cout<<"inside removeDuplicates\n";
    vector<int> nums = {1, 1};
    RemoveDuplicates removeDuplicates1;
    int result = removeDuplicates1.removeDuplicates(nums);
    cout << "length without dups = "<<result <<"\n";
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    twoSum();
    reverseInteger();
    palindromeNumber();
    romanToInt();
    longestPrefix();
    validParens();
    merge2Lists();
    removeDuplicates();
    return 0;
}
