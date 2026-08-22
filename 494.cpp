#include <iostream>
#include <string>
using namespace std;

int findTargetSumWays(vector<int>& nums, int target) {
     int totalSum = accumulate(nums.begin(),nums.end(),0);
     if((totalSum + target) % 2 != 0 || totalSum + target < 0) return 0;
     int P = (target + totalSum) / 2;

     vector<int>dp(P + 1); // dp[] represents 

    dp[0] = 1;
    for(int num : nums){
        for(int sum = P; sum >= num; sum--){
            dp[sum] = dp[sum] +  dp[sum - num]; // no of ways to get P = sum is no of ways to get sum + no of ways to get P-1 sum
        }
    }
    return dp[P];
    }

int main() {
    
    return 0;
}