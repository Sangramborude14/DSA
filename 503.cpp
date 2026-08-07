#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

 vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,-1);
        stack<int> st;

        for(int i=0; i < n; i++){
            while(!st.empty() && nums[st.top()] < nums[i % n]){
                ans[st.top()] = nums[i % n];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }


int main() {
    vector<int> nums = {1,2,1};
    vector<int> answer = nextGreaterElements(nums);
    for(int num : answer){
        cout << num << " ";
    }
    return 0;
}