#include <iostream>
#include <string>
#include<vector>
using namespace std;

int noOfAdjacentFlowers(vector<int>& bloomDays,int k,int days){
  int ans = 0;
  int consecutive = 0;
  for(int i=0; i < bloomDays.size();i++){
  if(bloomDays[i] <= days){
    consecutive++;
  }else{
    consecutive = 0;
  }
  if(consecutive == k){
    ans++;
    consecutive = 0;
  }
  }
  return ans;

};
    int minDays(vector<int>& bloomDays, int m, int k) {
  if((long long)m*k > bloomDays.size()) return -1;
  int ans = 0;
  int low = 1;
  int high = *max_element(bloomDays.begin(),bloomDays.end());
  
  while(low <= high){
    int mid = low + (high- low)/2;
    if(noOfAdjacentFlowers(bloomDays,k,mid) >= m ){
      ans = mid;
      high = mid - 1;
    }else{
      low = mid + 1;
    }
  }
  return ans;
    }

int main() {
    
    return 0;
}