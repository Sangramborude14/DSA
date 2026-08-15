#include <iostream>
#include <string>
#include<vector>
using namespace std;

int jump(vector<int>& nums) {
    int farthest = 0;
    int count = 0;
    int current_end = 0;

    for(int i=0; i < nums.size(); i++){
        farthest = max(farthest, i + nums[i]);
        if(i == current_end && i != nums.size() - 1){
            count++;
            current_end = farthest;
        }
    }
    return count;
    }

int main() {
    vector<int> nums = {2,3,0,1,4};
    cout << jump(nums);
    return 0;
}