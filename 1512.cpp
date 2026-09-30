#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(std::vector<int>& nums) {
        int count[101] = {0};
        int goodPairs = 0;

        for (int num : nums) {
            goodPairs += count[num];
            count[num]++;
        }

        return goodPairs;
    }
};

int main() {
    
    return 0;
}