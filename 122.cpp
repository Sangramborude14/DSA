#include <iostream>
#include <string>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int maxProfit = 0;
    for(int i=1; i < prices.size(); i++){
        int profit = prices[i] - prices[i-1];
        if(profit > 0){
            maxProfit += profit;
        }
    };
    return maxProfit;
    }

int main() {
    
    return 0;
}