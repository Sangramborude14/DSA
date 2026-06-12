#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
    public:
    bool isValid(string s){
        stack<char> stack1;
        for(char alpha : s){
            

            if(alpha == '(' || alpha == '{'|| alpha == '['){
                stack1.push(alpha);
            }else if(alpha == ')'){
                if(!stack1.empty() && stack1.top() == '('){
                    stack1.pop();
                }else{
                    return false;
                }
            }else if(alpha == ']'){
                if(!stack1.empty() && stack1.top() == '['){
                    stack1.pop();
                }else{
                    return false;
                }
            }else if(alpha == '}'){
                if(!stack1.empty() && stack1.top() == '{'){
                    stack1.pop();
                }else{
                    return false;
                }
            }
        }
        return stack1.empty();
    }
}   