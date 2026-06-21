#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while(left < right){
            while(!isalnum(s[left]) && (left < right)){
                left++;
            }
            while(!isalnum(s[right]) && (left < right)){
                right--;
            }

            if(tolower(s[right]) == tolower(s[left])){
                left++;
                right--;
            }else{
                return false;
            }
        }
        return true;
    }

int main() {
   string s = " ";
   bool result = isPalindrome(s);
   cout << result << "\n";

    return 0;
}