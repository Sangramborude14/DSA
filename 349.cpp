#include <iostream>
#include<vector>
#include<unordered_set>
#include <string>
using namespace std;

 vector<int> intersection(vector<int>& nums1,vector<int>& nums2){
    vector<int> answer;
    unordered_set<int> seen;

    for(int i : nums1){
        if(seen.find(i) == seen.end()){
            seen.insert(i);
        }   
    }

    for(int i : nums2){
        if(seen.find(i) != seen.end()){
            answer.push_back(i);
            seen.erase(i);
        }
    }

    return answer;
    };

int main() {
   
    return 0;
}