#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

 bool isIsomorphic(string s, string t) {
         unordered_map<char,char> hashmap1;
    unordered_map<char,char> hashmap2;
        for(int i = 0 ; i < s.length(); i++){
        if(hashmap1.count(s[i])){
            if(hashmap1[s[i]] != t[i]) return false;
        }else if(hashmap2.count(t[i])){
            if(hashmap2[t[i]] != s[i]) return false;
        }else{
            hashmap1[s[i]] = t[i];
            hashmap2[t[i]] = s[i];
        }
    }
    return true;
    }
int main() {
    isIsomorphic("sangi","qwert");
    return 0;
}