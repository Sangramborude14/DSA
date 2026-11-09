#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int>> triplets;
        const int n = nums.size();

        for (int i = 0; i < n - 2; ++i) {
            if (nums[i] > 0) {
                break;
            }
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                const int current_sum = nums[i] + nums[left] + nums[right];

                if (current_sum < 0) {
                    ++left;
                } else if (current_sum > 0) {
                    --right;
                } else {
                    triplets.push_back({nums[i], nums[left], nums[right]});

                    while (left < right && nums[left] == nums[left + 1]) {
                        ++left;
                    }
                    while (left < right && nums[right] == nums[right - 1]) {
                        --right;
                    }

                    ++left;
                    --right;
                }
            }
        }

        return triplets;
    }
};
    return 0;
}