#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

 bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
    for(int x : nums){
        seen.insert(x);
        if(seen.count(x) > 1) return true;   
    }
    return false;
    }

int main() {
    vector<int> nums = {1,2,3,4,1};
    bool result = containsDuplicate(nums);
    cout << result << "\n";

    
    return 0;
}