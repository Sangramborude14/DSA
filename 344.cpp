#include <iostream>
#include <string>
#include <vector>
using namespace std;

void reverseString(vector<char>& s){
   for(int i=0; i < s.size() / 2 ; i++){
    if(s[i] == s[s.size() - 1 -i]) continue;
    s[i] = s[i] ^ s[s.size() - 1 - i];
    s[s.size() - 1 - i] = s[i] ^ s[s.size() - 1 - i];
    s[i] = s[i] ^ s[s.size() - 1 - i];

   }
}


int main() {
vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    reverseString(s);
    for(auto c : s){
        cout << c << " " ;
    }

    
    return 0;
}