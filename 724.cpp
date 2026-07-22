#include <iostream>
#include <string>
#include <vector>
using namespace std;

int pivotIndex(vector<int> &nums){
    int totalSum = 0;
    for(int i=0 ; i < nums.size(); i++ ){
        totalSum += nums[i];
    }
    int leftSum = 0;
    int rightSum = 0;

    for(int i=0 ; i < nums.size(); i++ ){
        rightSum = totalSum - leftSum - nums[i];
        if(rightSum == leftSum) return i;
        leftSum += nums[i];
    }
    return -1;
}

int main() {
    
    return 0;
}