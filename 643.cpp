#include <iostream>
#include <string>
#include <vector>
using namespace std;


 double findMaxAverage(vector<int>& nums, int k) {
        int left = 0;
        double sum = 0;
        double maxSum = 0;

        for(int right = 0;right < nums.size();right++ ){
            sum += nums[right];

            if(right - left + 1 == k){
             maxSum = max(maxSum,sum);
                sum -= nums[left];
                left++;
            }

        }
        return maxSum / k;
    }

int main() {
    
    return 0;
}