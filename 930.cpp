#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int countAtMost(vector<int>& nums, int goal){
      int left = 0;
        int sum = 0;
        int count = 0;
        if(goal < 0){
            return 0;
        }
        
        for(int right = 0; right < nums.size(); right++){
            sum += nums[right];

            while(sum > goal){
                sum -= nums[left];
                left++;
            }
            count +=  right - left + 1;
        }
        return count;
}



    int numSubarraywithSum(vector<int>& nums, int goal){
        return countAtMost(nums,goal) - countAtMost(nums,goal-1);
      
    }



int main() {
    
    return 0;
}