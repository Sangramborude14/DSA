#include <iostream>
#include <string>
#include <vector>
using namespace std;

int dp(vector<int>nums,int i, vector<int>& memo){
    if(i == 0) return nums[0];
    if(i == 1) return max(nums[0],nums[1]);

    if(memo[i] != -1){
        return memo[i];
    };

    return memo[i] = max(dp(nums, i-1,memo),dp(nums,i-2,memo) + nums[i]);
   
}

int rob(vector<int>& nums) {
        int n = nums.size() - 1;
        if(n==0) return 0;
        vector<int>memo(n,-1);
        return dp(nums,n-1,memo);
    }

int main() {
    
    return 0;
}