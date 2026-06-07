#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> removeElements(vector<int> nums) {
    int writer = 0;

    // A single loop where the reader scans from left to right
    for (int reader = 0; reader < nums.size(); reader++) {
        if (nums[reader] != 0) {

        swap(nums[writer],nums[reader]);
            // Swap the element at 'reader' with the element at 'writer'
            // YOUR CODE HERE
            writer++;
         
            // Move the writer forward to the next available slot
        };

            
    }
    return nums;
}
int main() {
    vector<int> nums = {1,2,0,3,4,0,0,5};
   
    for(auto i : removeElements(nums)){
        cout << i << " ";
    }
    
    return 0;
}