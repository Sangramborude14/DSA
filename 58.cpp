#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s){
    int space_identifer = -1; // Important to handle special cases
    int last_alpha = s.length() - 1;
    for(int i=0; i < s.length(); i++){
        while(s[last_alpha] == ' '){
            last_alpha--;
        }
        if(s[i] == ' ' && i < last_alpha){
            space_identifer = i;
        }
       
    }
    return last_alpha - space_identifer;
}

int main() {
    int result = lengthOfLastWord("   fly me   to   the moon  ");
    cout << result;
    return 0;
}