#include <iostream>
#include <string>
#include <vector>
using namespace std;

  vector<int> searchRange(vector<int>& nums, int target) {
        int firstRange = -1;
        int secondRange = -1;
        int left = 0;
        int right = nums.size() - 1;
        while(left < right){
            int mid = left + (right - left) / 2;
            if(nums[mid] < target){
                left = mid + 1;
            }else{
                right = mid;
            }
        }
        if(nums[left] == target) firstRange = left;
        left = 0;
        right = nums.size() - 1;
        while(left < right){
            int mid = left + (right - left + 1)/2;
            if(nums[mid] <= target){
                left = mid;
            }else{
                right = mid - 1;
            }
        }
        if(nums[left] == target) secondRange = left;
        return {firstRange,secondRange};
    }

int main() {
    vector<int>nums = {5,7,7,8,8,10};
    vector<int>ans = searchRange(nums,8);
    for(auto i : ans){
        cout << i;
    }
    return 0;
}