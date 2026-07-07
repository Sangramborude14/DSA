#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int x){
    if(x < 0) return false;
    if(x % 10 == 0 && x != 0)return false;
    int temp = x;
    int reversedNum = 0;
    while(temp > reversedNum){
        int last_digit = temp % 10;
        reversedNum = reversedNum*10 + last_digit;
        temp = temp / 10;
    }
    return (temp == reversedNum) || (temp == reversedNum/10);
}

int main() {
    cout << isPalindrome(1221);
    return 0;
}