#include <iostream>
#include <string>
using namespace std;

 int minimumSize(vector<int>& nums, int maxOperations) {
 int low = 1;
 int high = *max_element(nums.begin(),nums.end());

 while(low < high){
    int mid = low + (high - low)/2;

    long long operations = 0;

    for(int num : nums){
        operations += (num + mid - 1)/ mid-1;
    }
    if(operations > maxOperations){
        low = mid + 1;
    }else{
        high = mid;
    }
 }
 return low;
 }

int main() {
    
    return 0;
}