#include <iostream>
#include <string>
#include<vector>
#include<unordered_map>
using namespace std;

 int minimumRecolors(string blocks, int k) {
        unordered_map<char,int> hashmap;
        int left = 0;
        int minFreq = INT_MAX;
        
        for(int right=0; right < blocks.size();right++){
            hashmap[blocks[right]]++;
            if(right - left + 1 == k){
                minFreq = min(minFreq,hashmap['W']);
                hashmap[blocks[left]]--;
                left++;
            }
        }
    }

int main() {
    
    return 0;
}