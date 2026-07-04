#include <iostream>
#include <string>
#include<vector>
#include<algorithm>

using namespace std;

 int removeDuplicates(vector<int>& nums) {
        int unique = 0;
        for(int i=1; i < nums.size(); i++){
            int traverse = i;

            if(nums[traverse] != nums[traverse - 1] ){
                //hit unique
                cout << "unique original: "<< nums[unique] <<"\n";
                 unique++; //first move pointer ahead
                nums[unique] = nums[traverse]; // then replace value
                cout << "new unique: "<< nums[unique] <<"\n";
                continue;
            }
            cout << "traverse: " <<nums[traverse] <<"\n";
        }
        return unique+1;
    }

int main() {

    vector<int>nums = {0,0,1,1,1,2,2,3,3,4};  
   int result = removeDuplicates(nums);
   cout << result ;
    return 0;
}
