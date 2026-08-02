#include <iostream>
#include <string>
using namespace std;

// Instead of calculating sum again and again, precompute them at once.

// Build Prefix
vector<int> buildPrefix(vector<int>& arr){
    vector<int> prefix(arr.size());
    prefix[0] = arr[0];

    for(int i = 1;i < arr.size(); i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    return prefix;
}

//query range
int rangeSum(vector<int>& prefix,int l,int r){
    if(l == 0) return prefix[r];

    return prefix[r] - prefix[l-1];
    
}   

// prefix sum + Hash Map
int subarraySum(vector<int>& nums, int k){
    unordered_map<int,int> mp;
    mp[0] = 1;

    int prefix = 0;
    int count = 0;

    for(int num : nums){
        prefix += sum;

        if(mp.find(prefix - k) != mp.end()){
            count += mp[prefix - 1];
        }
        mp[prefix]++;
    }
    return count;
}