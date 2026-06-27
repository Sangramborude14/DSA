#include <iostream>
#include <string>
using namespace std;

 int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while(right > left){
        int mid = left + (right - left) / 2;
        if(nums[mid] = target) return mid;
        if(nums[mid] > target) right = mid - 1;
        if(nums[mid] < target) left = mid + 1;

        }
        return -1;
    }

int main() {
    
    return 0;
}   