#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    std::vector<std::vector<int>> permute(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        backtrack(0, nums, result);
        return result;
    }

private:
    void backtrack(int start, std::vector<int>& nums, std::vector<std::vector<int>>& result) {
        if (start == nums.size()) {
            result.push_back(nums);
            return;
        }
        for (int i = start; i < nums.size(); ++i) {
            std::swap(nums[start], nums[i]);
            backtrack(start + 1, nums, result);
            std::swap(nums[start], nums[i]);
        }
    }
};

int main() {
    
    return 0;
}