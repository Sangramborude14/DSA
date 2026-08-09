#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int noOfDays(vector<int>& weights, int maxWeight){
    int currentWeight = 0;
    int days = 1;

    for(int i=0; i < weights.size(); i++){
        if(currentWeight + weights[i] > maxWeight){
            currentWeight = weights[i];
            days++;
        }else{
            currentWeight += weights[i];
        }
    }
    return days;
}

int shipWithinDays(vector<int>& weights, int days) {
    int low = *max_element(weights.begin(),weights.end());
    int high = accumulate(weights.begin(),weights.end(),0);

    while(low < high){
        int mid = low + (high-low)/2;
        if(noOfDays(weights,mid) > days){
            low = mid + 1;
        }else{
            high = mid;
        }
    }
    return low;
    }

int main() {
    vector<int> weights = {3,2,2,4,1,4};
    cout << shipWithinDays(weights,3);
    return 0;
}