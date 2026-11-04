#include <iostream>
#include <string>
using namespace std;

class Solution {
    public: 
        int dp(vector<int>& cost,int i,vector<int>& memo){
            if(i == 0) return cost[0];
            if(i == 1) return cost[1];

            if(memo[i] != -1) return memo[i];

            if(i == cost.size()){
                return memo[i] = min(dp(cost,i-1,memo),dp(cost,i-2,memo));
            } 
            return  memo[i] = cost[i] + min(dp(cost,i-1,memo),dp(cost,i-2,memo));   
        }

        int minCostClimbingStairs(vector<int>& cost){
            vector<int> memo(cost.size() + 1, -1);
            return dp(cost,cost.size(),memo);
        }
};

int main() {
    
    return 0;
}