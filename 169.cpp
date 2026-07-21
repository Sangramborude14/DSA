#include <iostream>
#include <string>
#include<vector>
#include<unordered_map>

using namespace std;

int majorityElement(vector<int>& nums) {
unordered_map<int,int> hashmap;
   int candidate = nums[0];
   int count = 1;
   for(int i : nums){
    if(i == candidate){
        count++;
    }else{
        count--;
    }
    if(count == 0){
        candidate = i;
        count++;
    }
   }
   return candidate;
    }

int main() {
    vector<int> nums = {2,2,1,1,1,2,2};
    int result = majorityElement(nums);
    cout << result;
    return 0;
}