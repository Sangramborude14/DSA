#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

bool isVowel(char c){
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
string reverseVowels(string s){
    int left = 0;
    int right = s.length() - 1;

    while(left < right) {
        while(left < right && !isVowel(s[left])){
            left++;
        }
        while(left < right && !isVowel(s[right])){
            right--;
        }
        swap(s[left],s[right]);
        left++;
        right--;
    }
    return s;
}

int main() {
    string s = "IceCreAm";
    cout << reverseVowels(s)<<endl;
    return 0;
}