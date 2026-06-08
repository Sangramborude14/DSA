#include <iostream>
#include <vector>
#include <string>
using namespace std;

int MaxSumOfSubarray(vector<int>nums, int k){
    int start = 0;
    int sum = 0;
    int max = 0;
    vector<int> subarray;

  while( start <= nums.size() - k){
      for(int i = start ; i < k + start; i++){
        subarray.push_back(nums[i]);
    };

    for( int num : subarray){
        cout << num << " ";
        sum += num;
    };
    if(sum > max){
        max = sum;
    }
    subarray.clear();
    sum = 0;    
    start++;
    cout << "\n";
  }
  return max;
}

int main() {
    vector<int> nums = {2,1,5,1,3,2};
    int result = MaxSumOfSubarray(nums,3);
    cout << result << "\n";
    
    return 0;
}