#include <iostream>
#include <vector>
#include<cmath>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;

        for(int i=0; i < nums.size(); i++){
            if(window.count(nums[i])){
                return true;
            }
            
            if(window.size() > k){
                window.erase(nums[i - k]);
            }
        }
        return false;
    }
};

int main() {
    Solution solver;
    vector<int> nums = {1, 2, 3, 1};
    int k = 3;
    cout << "Test containsNearbyDuplicate: " << (solver.containsNearbyDuplicate(nums, k) ? "true" : "false") << endl;
    return 0;
}
