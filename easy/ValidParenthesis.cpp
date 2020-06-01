//
// Created by vijay on 5/24/20.
//
#include <string>
#include <stack>
using namespace std;
class ValidParenthesis {
public:
    bool isValid(string s) {
        if(s.length() ==1){
            return false;
        }
        bool isValid = true;
        stack<char> parenStack;
        for(string::iterator itr = s.begin();itr!=s.end();++itr){
            char ch = *itr;
            bool isEmpty = parenStack.size() == 0;
            if(ch == '(' || ch == '['|| ch == '{'){
                parenStack.push(ch);
            } else if(!isEmpty && ch == ')'){
                char open = parenStack.top();
                parenStack.pop();
                if(open != '('){
                    isValid = false;
                    break;
                }
            } else if(!isEmpty && ch == ']'){
                char open = parenStack.top();
                parenStack.pop();
                if(open != '['){
                    isValid = false;
                    break;
                }
            } else if(!isEmpty && ch == '}'){
                char open = parenStack.top();
                parenStack.pop();
                if(open != '{'){
                    isValid = false;
                    break;
                }
            }
        }
        return isValid && parenStack.size() == 0;
    }
};