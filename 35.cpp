#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int searchInsert(vector<int> &nums, int target) {
  int low = 0;
  int high = nums.size() - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2;
    cout << nums[mid] << "\n";
    if (nums[mid] == target) {
      return mid;
    }

    if (nums[mid] < target) {
      low = mid + 1;
    }

    if (nums[mid] > target) {
      high = mid - 1;
    }
  }
  return low;
}

int main() {
  vector<int> nums = {1, 31, 6};
  int target = 5;
  bool result = searchInsert(nums, target);
  cout << result << "\n";
  return 0;
}