#include <iostream>
#include <string>
#include <vector>
using namespace std;

   bool search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(nums[mid] == target){
                return true;
            }
             if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                low++;
                high--;
                continue;
            }

            if(nums[low] <= nums[mid]){
                 // Left half sorting
            if(nums[low] <= target && target < nums[mid] ){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
            }else{
                if(nums[high] >= target && nums[mid] < target){
                    low = mid + 1;
                }else{
                    high = mid - 1;
                }
            }
        }
        return false;
    }
int main() {
    vector<int> nums = {4,5,6,7,0,1,2}; 
    cout << search(nums,3) << endl;
    return 0;
}