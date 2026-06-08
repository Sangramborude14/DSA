#include <iostream>
#include <string>
#include <vector>

int maxSubarraySum(vector<int>& nums, int k){
int current_sum = 0;
int max_sum = 0;

for(int i = 0; i < k; i++){
    current_sum += nums[i];
}
for(int i = k; i < nums.size(); i++){
    current_sum += nums[i];

    if(max_sum < current_sum){
    max_sum = current_sum;
}
}

return max_sum;
}

using namespace std;

int main() {
    
    return 0;
}