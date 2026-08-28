#include <iostream>
#include <string>
using namespace std;

int robLinear(vector<int>& nums, int start, int end){
    int prev1 = 0;
    int prev2 = 0;

    for(int i=start; i <= end; ++i){
        int current = max(prev1, prev2 + nums[i]);
        int prev2 = prev1;
        prev1 = current;
    }
    return prev1;

}

int rob(vector<int>& nums){
    int n = nums.size();
    if(n == 0) return 0;
    if(n == 1) return nums[0];
    return max(robLinear(nums,0,n-2),robLinear(nums,1,n-1));
}

int main() {
    
    return 0;
}
