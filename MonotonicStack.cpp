#include <iostream>
#include <string>
using namespace std;

// Case-1 Next Greater Element
vector<int> nextGreater(vector<int>& nums){ // MonoTonically decreasing
    int n = nums.size();
    vector<int> ans(n,-1);
    stack<int> st;

    for(int i=0; i < n;i++){
        while(!st.empty() && nums[st.top()] < nums[i]){ // while the top element of stack is less than the current element
            ans[st.top()] = nums[i]; // since nums[i] is greater than stack element it is the successor in the array
            st.pop(); //remove the top element from stack to check for the next element
        }
        st.push(i); //  push the new element to compare it with upcoming elements
    }
    return ans;
}

// Case-2 Next Smaller Element
vector<int> nextSmaller(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n,-1);
    stack<int> st;

    for(int i=0; i < n ; i++){
        while(!st.empty() && nums[st.top()] > nums[i]){
            ans[st.top()] = nums[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;
}

int main() {
    
    return 0;
}

// Case-3 Previous Greater Element
vector<int> previousGreater(vector<int>& nums){
    int n = nums.size();
vector<int> ans(n,-1);
stack<int> st;

for(int i=0; i < n; i++){
    while(!st.empty() && nums[st.top()] <= nums[i]){
        st.pop();
    }
    if(!st.empty()){
        ans[i] = nums[st.top()];

        st.push(i);
    }
    return ans;
}
}

// Case-4 Previous Smaller Element
vector<int> previousSmaller(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n,-1);
    stack<int> st;

    for(int i=0; i < n; i++){
        while(!st.empty() && nums[st.top()] >= nums[i]){
            st.pop();
        }
        if(!st.empty()){
            ans[i] = nums[st.top()];
        }
        st.push(i);
    }
    return ans;
}

// Case-5 Next Greater Index
vector<int> nextGreaterIndex(vector<int>& nums){
    int n  = nums.size();
    vector<int> ans(n,-1);
    stack<int> st;

    for(int i=0; i < n; i++){

        while(!st.empty() && nums[st.top()] > nums[i]){
            ans[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
  return ans;
}

// Case-6 Previous Greater Index
vector<int> previousSmallerIndex(vector<int>& nums){
    int n = nums.size();
    vector<int> ans(n,-1);
    stack<int> st;

    for(int i=0;i < n; i++){
        while(!st.empty() && nums[st.top()] >= nums[i]);
        st.pop();

    if(!st.empty()){
        ans[i] = st.top();

        st.push(i);
    }
    return ans;
    }
}

// Generic Template
stack<int> st;
vector<int> ans(n);

for(int i=0; i < n; i++){

    while(!st.empty() && CONDITION){
        //update answer
        st.pop();
    }
    st.push(i);
}

// Advance templates


//Previous Smaller Index
vector<int> left(n);
stack<int> st;

for(int i=0; i < n; i++){
    while(!st.empty() && nums[st.top()] >= nums[i])
     st.pop();

    left[i] = st.empty() ? -1 : st.top();
    st.push(i);
}

//Next Smaller Index
vector<int> right(n);
stack<int> st;

for(int i=n-1; i >= 0; i--){
    while(!st.empty() && nums[st.top()] > nums[i])
    st.pop();

    right[i] = st.empty() ? n : st.top();
    st.push(i);
}

vector<int>previousGreater(vector<int>& nums){
    vector<int>ans(n,-1);
    stack<int> st;
    int n = nums.size();

    for(int i=0; i < n; i++){
        while(!st.empty() && nums[st.top()] <= nums[i]){
            
        }
    }
}