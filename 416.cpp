#include <iostream>
#include <string>
using namespace std;

bool canPartition(vector<int>& nums) {
    int totalSum = accumulate(nums.begin(),nums.end(),0);
    if(totalSum % 2 != 0) return false;
    int targetSum = totalSum / 2;
    vector<bool> dp(targetSum + 1);

    dp[0] = true;

    for(int num : nums){
        for(int sum = targetSum; sum >= num; sum--){
            dp[sum] = dp[sum] || dp[sum - num];
        }
    }
    return dp[targetSum];
    }

int main() {
    
    return 0;
}