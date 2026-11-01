#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, right = 0;
        for (; right < nums.size(); ++right) {
            if (nums[right] == 0) {
                --k;
            }
            if (k < 0) {
                if (nums[left] == 0) {
                    ++k;
                }
                ++left;
            }
        }
        return right - left;
    }
};

int main() {
    
    return 0;
}