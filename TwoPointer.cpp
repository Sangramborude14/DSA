#include <iostream>
#include <string>
#include<vector>
using namespace std;

// Pattern 1 - Two pointers from opposite ends

vector<int> swaping(vector<int> arr){
int left = 0;
int right = arr.size() - 1;

while(left < right){
    swap(arr[left],arr[right]);
    left++;
    right--;
}
return arr;
}

// Pattern 2 - Find a pair with a target sum;

int targetSum(vector<int> arr,int target){
    int left = 0;
    int right = arr.size() - 1;

    while(left < right){
        int sum = arr[left] + arr[right];

        if(sum == target){
            return true;
        }else if(sum < target){
            left++;
        }else{
            right--;
        }
    }
    return false;
}

// Pattern 3 - Check Palindrome
bool isPalindrome(string s){
    int left = 0;
    int right = s.length() - 1;

    while(left < right){
        if(s[left] == s[right]){
            left++;
            right--;
        }else{
            return false;
        }
    }
    return true;
}

// Patttern 4 - Modify elements while moving pointers
bool isVowel(char c){
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
string reverseVowel(string s){
    int left = 0;
    int right = s.length() - 1;

    while(left < right){
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

//Pattern 5 - Same direction pointers
// Remove duplicates from a sorted array

vector<int> removeDuplicates(vector<int>& arr){
    int slow = 0;

    for(int fast = 1; fast < arr.size() - 1; fast++){
        if(arr[fast] != arr[slow]){
            slow++;
            nums[slow] = nums[fast];
        }
    }
}




int main() {
    
    return 0;
}