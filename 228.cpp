#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
 * LeetCode 228: Summary Ranges
 * Difficulty: Easy
 * 
 * Problem Statement:
 * You are given a sorted unique integer array nums.
 * Return the smallest sorted list of ranges that cover all the numbers in the array exactly.
 * 
 * Each range [a,b] in the list should be output as:
 * - "a->b" if a != b
 * - "a" if a == b
 * 
 * Example 1:
 * Input: nums = [0,1,2,4,5,7]
 * Output: ["0->2","4->5","7"]
 * 
 * Example 2:
 * Input: nums = [0,2,3,4,6,8,9]
 * Output: ["0","2->4","6","8->9"]
 */

vector<string> summaryRanges(vector<int>& nums) {
    // Write your solution here
    return {};
}

int main() {
    vector<int> nums = {0, 1, 2, 4, 5, 7};
    vector<string> result = summaryRanges(nums);
    
    // Print the result
    for (const string& s : result) {
        cout << s << " ";
    }
    cout << endl;
    
    return 0;
}
