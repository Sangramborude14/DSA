#include <iostream>
#include <string>
#include<vector>
#include<unordered_map>
using namespace std;


 int subarraysDivByK(vector<int>& nums, int k) {
    int remainder;
    int count = 0;
    unordered_map<int,int> mp;
    int prefix = 0;
    mp[0] = 1;
    for(int num :nums) {
        prefix += num;
        remainder = (prefix % k + k) % k;

        if(mp.find(remainder) != mp.end()){
            count += mp[remainder];
            mp[remainder]++;
        }else{
            mp[remainder]++;
        }
    }
    return count;
 }

 void prefix(vector<int>& arr){
    int sum = 0;
    for(int i : arr){
        sum += i;
        cout << sum << " ";
    }
 }
 void remainder(vector<int>& arr, int k){
    for(int i : arr){
    int remainder = (i % k + k) % k;
    cout << remainder << " ";
    }
 }

int main() {
    vector<int>nums = {4,5,0,-2,-3,1};
    vector<int> result = {4,9,9,7,4,5};
    prefix(nums);
    cout <<endl;
    remainder(result,5);
    cout << endl;
    cout << subarraysDivByK(nums,5);

    return 0;
}