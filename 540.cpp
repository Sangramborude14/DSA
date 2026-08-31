#include <iostream>
#include <string>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int answer = nums[0];
     for(int i=1; i < nums.size() - 1; i++){
        if(nums[i] != nums[i+1] && nums[i-1] != nums[i]){
            answer = nums[i];
        }
     }
     return answer;
    }

int main() {
    vector<int>nums = {3,3,7,7,10,11,11};
    cout << singleNonDuplicate(nums);
    return 0;
}