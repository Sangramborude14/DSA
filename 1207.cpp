#include <iostream>
#include <string>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int,int> hashmap;
    unordered_set<int> seen;
        for(int i : arr){
           hashmap[i]++;
        }
        for(const auto& pair : hashmap){
            if(seen.find(pair.second) != seen.end()){
                return false;
            }
        seen.insert(pair.second);
        }
        return true;
    }

int main() {
    
    return 0;
}