#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> sortArrayByParity(vector<int>&nums){
  int right = nums.size() - 1;
  int left = 0;

  while(left < right){
    if(nums[left] % 2 == 0){
        left++;
    }
    if(nums[right] % 2 != 0){
        right--;
    }
    if(nums[left] % 2 != 0 && nums[right] % 2 == 0 && left < right){
        swap(nums[left],nums[right]);
    }
  }
  return nums;
}

int main() {
    vector<int> nums = {3,1,2,4};
    vector<int> answer = sortArrayByParity(nums);
    for(int i : answer){
        cout << i <<" ";
    }
    return 0;
}