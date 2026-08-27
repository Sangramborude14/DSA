#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int lengthOfLIS(vector<int>& nums) {
         vector<int>dp(nums.size() + 1);

        for(int i=0;i < nums.size();i++){
            dp[i] = 1;
            for(int j=0;j < nums.size();j++){
                if(nums[j] < nums[i]){
                    dp[i] = max(dp[i],dp[j] + 1);
                }
            }
        }
        return *max_element(dp.begin(),dp.end());

    }

int main() {
    
    return 0;
}