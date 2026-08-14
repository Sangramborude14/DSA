#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
using namespace std;

 bool canJump(vector<int>& nums) {
  int i = 0;
  int max_reach = 0;

  for(int i=0; i < nums.size(); i++){
    if( i > max_reach){
      return false;
    }else{
      max_reach = max(max_reach, nums[i] + i);
    }
  
  }
   if(max_reach >= nums.size() - 1){
    return true;
  }else{
    return false;
  }
   }


int main() {
    
    return 0;
}