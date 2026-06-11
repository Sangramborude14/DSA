#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <algorithm>


using namespace std;


 string removeDuplicates(string s){
        stack<char> stack1;
        for(char alpha : s){
            if(!stack1.empty() && stack1.top() == alpha){
                stack1.pop();
            }
            else{
                stack1.push(alpha);
            }
        }
         string result = "";
           while(!stack1.empty()){
            result += stack1.top();
            stack1.pop();
           }
           reverse(result.begin(),result.end());
        return result;
}


