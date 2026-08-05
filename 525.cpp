#include <iostream>
#include <string>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

int findMaxLength(vector<int>& nums) {
    unordered_map<int,int> mp;
    int prefix = 0;
    int size = 0; // min size can be 0
    mp[0] = -1; // initailly store in -1 index where prefix Sum = 0
    replace(nums.begin(),nums.end(),0,-1);
    for(int i=0; i < nums.size(); i++){
        prefix += nums[i];
        
        if(mp.find(prefix) != mp.end()){
            size = max(i - mp[prefix] ,size);
        }
        if(mp.find(prefix) == mp.end()){
            mp[prefix] = i;
        }
    }
    return size;
    }
    
int main() {
    
    return 0;
}