#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
        int left = 0;
        int right = nums.size() - 1;
        if(nums.size() == 2){
            if(nums[0] + nums[1] == target)return {1,2};
            return {};
        }
    while(left <= right){
        int sum  = nums[left] + nums[right];
        if( sum > target){
            right --;
        }
        if(sum < target){
            left++;
        }
        if(sum == target){
            cout << left+1<< " "<< right+1; 
            return{ left +1,right+ 1};
        }
    }
    return {};
}

int main() {
    vector<int>nums = {-3,3,4,90};
    twoSum(nums,0);

    return 0;
}