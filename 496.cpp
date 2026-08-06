#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>
#include <vector>
using namespace std;

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
            int n = nums2.size();
            unordered_map<int,int>lookup;
            stack<int>st;

            for(int i=0;i < n;i++){
                while(!st.empty() && nums2[st.top()] < nums2[i]){
                    lookup[nums2[st.top()]] = nums2[i];
                    st.pop();
                }
            st.push(i);
            };
            while(!st.empty()){
            lookup[nums2[st.top()]] = -1;
            st.pop();
        }
        vector<int> ans;
        for(int i : nums1){
         ans.push_back(lookup[i]);   
        };
        return ans;
        }
        
    
;
int main() {
    
    return 0;
}