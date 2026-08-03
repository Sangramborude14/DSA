#include <iostream>
#include <string>
using namespace std;

 int subarraySum(vector<int>& nums, int k) {
     unordered_map<int,int> mp;
     mp[0] = 1;
     
     int prefix = 0;
     int count = 0;

     for(int num : nums){
        prefix += num;
        if(mp.find(prefix - k) != mp.end()){
            count += mp[prefix - k];
        }
        mp[prefix]++;
     }
     return count;
    }

int main() {
    
    return 0;
}