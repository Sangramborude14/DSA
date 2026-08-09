#include <iostream>
#include <string>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int EatingTime(vector<int>&piles,int k){
    int time = 0;
    for(int i = 0; i < piles.size(); i++){
        time += (piles[i] + k - 1) / k;
    }
    return time;

};

int minEatingSpeed(vector<int>& piles, int h) {
    int low = 1;
    int high =  *max_element(piles.begin(),piles.end());



    while(low < high){
        int mid = low + (high - low) / 2;
        int TimeTaken = EatingTime(piles,mid);
        
        if(TimeTaken > h){
            low = mid + 1;
        }else{
            high = mid;
        }
    };
    return low;
    }

int main() {
    vector<int> piles = {3,6,7,11};
    cout << EatingTime(piles,3);
    cout << "min speed; " << minEatingSpeed(piles,8);
    return 0;
}