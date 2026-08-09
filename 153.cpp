#include <iostream>
#include <string>
#include <vector>
using namespace std;

 int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int ans;

        while(low < high){
            int mid = low + (high - low)/2;

            if(nums[mid] > nums[high]){ // Left side is sorted
             low = mid + 1;
            }else{
                high = mid;
            }
            ans = mid;          
        }
        return nums[ans];
    }

int main() {
    vector<int> nums = {4,5,6,7,0,1,2};
    int result = findMin(nums);
    cout << result << endl;
    return 0;
}