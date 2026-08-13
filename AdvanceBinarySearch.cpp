#include <iostream>
#include <string>
using namespace std;

// Advance Binary Search 

// 1. Rotated Sorted Array

int search(vector<int>&nums, int target){
int low = 0;
int high = nums.size() - 1;
int ans = 9999999;      

while(low <= high) {
    int mid = low + (high - low) / 2;

    if(nums[mid] == target){
        return mid;
    }
    // Left Half is sorted
    if(nums[low] <= nums[mid]){
        if(nums[low] <= target && target < nums[mid]){
            high = mid - 1;
        }
        else  
        {
            low = mid + 1;
        }
    }

    // Right Half is sorted
    else {
        if(nums[mid] <  target && target <= nums[high]){
            low = mid + 1;
        }else{
            high = mid - 1;
        }   
    }    
}
}       

// Advanced Binary Search through answers
int BinarySearchThroughAnswer(){
    int low = minimum_value;
    int high = maximum_value;
    int ans = high;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(isPossible(mid)){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    };
    return ans;
}

int main() {
    
    return 0;
}