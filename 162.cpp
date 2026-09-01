#include <iostream>
#include <string>
#include<vector>
using namespace std;

int findPeakElement(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        int mid = 0;
        while(left < right){
            mid = left + (right - left)/2;

            if(nums[mid] < nums[mid+1]){
                left = mid + 1;
            }else{
                right = mid;
            }
        }
        return left;
}

int main() {
    vector<int>nums = {1,2,1,3,5,6,4};
    cout << findPeakElement(nums);
    return 0;
}