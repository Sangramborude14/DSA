#include <iostream>
#include <string>
using namespace std;

  vector<int> searchRange(vector<int>& nums, int target) {
        auto first = lower_bound(nums.begin(), nums.end(),target);

        if(first == nums.end() || *first != target){
            return {-1,1};
        }

        auto last = upper_bound(nums.begin(),nums.end(), trget) - 1;
        return {static_cast<int>(first - nums.begin()), static_cast<int>(last - nums.begin())}
    }

int main() {
    
    return 0;
}