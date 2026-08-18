#include <iostream>
#include <string>
using namespace std;

int uniquePaths(int m, int n) {
    vector<vector<int>> dp(m,vector<int>(n));

    //top row
    for(int i=0; i < m;i++){
        dp[i][0] = 1;
    };
    //left most column
    for(int j=0; j < n;j++){
        dp[j][0] = 1;
    }
    //remaining cases
    for(int i = 1; i < m; i++){
        for(int j = 1; j < n; j++){
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }

    return dp[m-1][n-1];
    }

int main() {
    
    return 0;
}