#include <iostream>
#include <string>
#include <vector>
using namespace std;

int removeElements(vector<int> nums){
   int writer = 0;
   
   for(int reader = 0; reader < nums.size() ; reader++){

    if(nums[reader]  != val){
        nums[writer] = nums[reader];
        writer++;
    }
   }
   return writer;
}

int main() {

    return 0;
}