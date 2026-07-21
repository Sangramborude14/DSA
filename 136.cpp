#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

 int singleNumber(vector<int>& nums) {
    int result = 0;
   for(int i=0; i < nums.size(); i++){
    result ^= nums[i];
   }
   return result;
    }

int main() {
    vector<int>nums = {2,2,1};
    int result = singleNumber(nums);
    cout << result << "\n";
    return 0;

}