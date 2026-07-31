#include <iostream>
#include <string>
using namespace std;

// Fixed Window Template
int left = 0;
int sum = 0;

for(int right=0;right < n; right++){
    sum += arr[right];

    if(right - left + 1 == k){ //current window size || window expands till window size is reached
        
        sum -= arr[left]; // remove the left element
        left++; // to maintain the window size
    }
}

// Find maximum sum of a contiguous subarrray of size k
int subArraySum(vector<int>& nums,int k){
    int left = 0;
    int sum = 0;
    int maxSum = 0;

    for(int right = 0; right < nums.size();right++){
        sum += nums[right];
        
        if(right - left + 1 == k ){
            if(sum > maxSum) maxSum = sum;
            sum -= nums[left];
            left++;
        }
    }
    return maxSum;
}


// Find minimum length subarray whose sum is at least 7
int minLengthSubArray(vector<int>& nums,int k){
    int left = 0;
    int sum = 0;
    int ans =INT_MAX;

    for(int right = 0; right < nums.size(); right++){
        sum += nums[right];
        while(sum >= k){
            ans = min(ans,right - left + 1);
            sum -= nums[left];
            left++;
        }
    }
return ans;
}


// maximum window problem
int maxWindow(vector<int>& nums,int target){
     int left = 0;
     int sum = 0;
     int ans= 0;
     
     for(int right=0;right < nums.size(); right++){
        sum += nums[right];
        while(sum > target){
            ans = max(ans,right - left + 1);
            sum -= left;
            left++;

        }
     }
     return ans;
}


// Frequency based sliding window

// Longest substring without repeating character
int norepeatingChar(string s){
    unordered_set<char> seen;
    int left = 0;
    int ans = 0;

    for(int right=0; right < s.size(); right++){
        if(seen.find(s[right]) == seen.end()){
            seen.insert(s[right]);
            ans = max(ans,right - left + 1);
        }
        while(seen.find(s[right]) != seen.end()){
            seen.erase(s[left]);
            left++;
        }
    }
    return ans;
}

//longest substring containing at most 2 distinct characters
int longestSubstringContainingAtMostTwoDistinctCharacters(string s){
    int left = 0;
    unordered_map<char,int> freq;
    int ans = 0;

    for(int right = 0; right < s.size(); right++){
        freq[s[right]]++;

        while(freq.size() > 2){
            freq[s[left]]--;

            if(freq[s[left]] == 0){
                freq.erase(s[left]);
            }
            left++;
        }
        ans = max(ans,right - left + 1);
    }
    return ans;
}

// Level-4 At most k distinct Characters
int longestSubstring(string s, int k){
    int left = 0;
    int ans = 0;

    unordered_map<char,int> freq;

    for(int right = 0; right < left ; right++){

        freq[s[right]]++;

        while(freq.size() > k){
            freq[s[left]]--;

            if(freq[s[left]] == 0){
                freq.erase(s[left]);
            }
            left++;
        }
        ans = max(ans,right - left + 1);
    }
    return ans;
}

int main() {
    
    return 0;
}