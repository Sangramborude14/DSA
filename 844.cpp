#include <iostream>
#include <string>
using namespace std;

class Solution {
    public: 
    string build(string s){
         int slow = 0;
         for(int fast = 0; fast < s.size(); fast++){
            if(s[fast] != '#'){
                s[slow++] = s[fast];
            }else if(slow > 0){
                slow--;
            }
         }
         return s.substr(0,slow);
    }

    bool backspaceCompare(string s,string t){
        return build(s) == build(t);
    }
}

int main() {
    
    return 0;
}