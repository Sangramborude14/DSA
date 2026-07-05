#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int missingNumber(vector<int>& nums){
 int result = nums.size();

        for (int i = 0; i < nums.size(); i++) {
            result ^= i;
            result ^= nums[i];
        }

        return result;
   
}

int main() {
    vector<int>v1 = {9,6,4,2,3,5,7,0,1};
    int result = missingNumber(v1);
    cout << result; 
    return 0;
}