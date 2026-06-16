#include <iostream>
#include <string>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices){
    int min_price = prices[0];
    int max_profit = 0;
    
    for(int i = 0 ; i <prices.size();i++){
        if( prices[i] < min_price) min_price = prices[i];
        if( prices[i] - min_price > max_profit) max_profit = prices[i] - min_price;
        
    }
    return max_profit;
}

int main() {
    
    return 0;
}