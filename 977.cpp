#include <iostream>
#include <string>
#include <vector>
#include<cmath>
#include<algorithm>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
   int left = 0;
   int right = n - 1;
   int k = n-1;
   vector<int> result(n);

   while(left <= right){
    if(nums[left]*nums[left] > nums[right]*nums[right]){
        result[k] = nums[left]*nums[left];
        k--;
        left++;
    }else{
        result[k] = nums[right]*nums[right];
        k--;
        right--;
    }
   }
   return result;
    }

int main() {
    vector<int> nums = {-4, -1, 0, 3, 10};
    vector<int> result = sortedSquares(nums);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
    return 0;
}