#include <iostream>
#include <string>
using namespace std;

 int coinChange(vector<int>& coins, int amount) {
    vector<int>dp(amount+1,INT_MAX);
    dp[0] = 0;

    for(int x = 1; x <= amount; x++){
        for(int coin : coins){
          if(x >= coin && dp[x - coin] != INT_MAX){
              dp[x] = min(dp[x], dp[x-coin] + 1);
          }
        }
    }
    return dp[amount];
    }

int main() {
    
    return 0;
}