#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int sumCalculator(vector<int>nums,int divisor){
    int sum = 0;
    for(int num: nums){
        sum += (num + divisor - 1)/divisor;
    }
    return sum;
}

 int smallestDivisor(vector<int>& nums,int threshold) {
    int max = *max_element(nums.begin(),nums.end());
    int left = 1;
    int right = max;

    while(left < right){
        int mid = left + (right - left)/2;
        int sum = sumCalculator(nums, mid);
        if(sum <= threshold){
            right = mid;
        }else{
            left = mid + 1;
        }
    }
    return left;
    }

int main() {
    
    return 0;
}