#include <iostream>
#include <string>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> letterCount;
        
        for(char c: s){
            letterCount[c]++;
        };
        for(int i=0; i < s.length();i++){
            char c = s[i];
            if(letterCount[c] == 1){
                return i;
            };
        return -1;
        }
    }
};

int main() {
    firstUniqChar("leetcode");
    return 0;
}