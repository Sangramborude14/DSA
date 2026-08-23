#include <iostream>
#include <string>
using namespace std;

   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
            vector<unsigned int>dp(amount+1,0);
    dp[0] = 1;

    for(int coin: coins){
        for(int i = coin; i <= amount; i++){
            dp[i] += dp[i - coin];
        }
    } 
    return dp[amount];

int main() {
    
    return 0;
}