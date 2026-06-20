#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s){
    unordered_map<char,int> hashmap;
    int left = 0;
    int maxLength = 1;
    if(s.length() == 0) return 0;
    for(int right = 0; right < s.length(); right++){
        hashmap[s[right]] += 1;

        while(hashmap[s[right]] > 1){
            hashmap[s[left]] -= 1;
            left++;
        }
        int Length = right - left + 1;
        if(maxLength < Length){
            maxLength = Length;
        }

    }
    return maxLength;
    
}

int main() {
    
    return 0;
}