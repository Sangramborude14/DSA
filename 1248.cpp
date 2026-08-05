#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

 int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0] = 1;

        int count = 0;
        int prefix = 0;

        for(int num : nums){
            prefix += num % 2;

            if(mp.find(prefix - k) != mp.end()){
                count += mp[prefix - k];
            }
            mp[prefix]++;
        }
        return count;
    }

int main() {
    vector<int> nums = {2,2,2,1,2,2,1,2,2,2};
    cout << numberOfSubarrays(nums,2);
    return 0;
}