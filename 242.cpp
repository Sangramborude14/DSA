#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool isAnagram(string s, string t){
unordered_map<char,char> hashmap;

if(s.length() != t.length()) return false;

for(int i=0; i < s.length();i++){

   if(!hashmap[s[i]]){
    hashmap[s[i]] = t[i];
   }
   if(hashmap[s[i]] != t[i]){
    return false;
   }
}
return true;
}

int main() {
    
    return 0;
}