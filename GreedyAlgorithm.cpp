#include <iostream>
#include <string>
using namespace std;

// 1. Sort + Greedy Selection

sort(arr.begin(),arr.end());

for(auto x: arr){
    if(canTake(x)){
        take(x);
    }
}
// Used for: 
//Assign Cookies
// Activity selection
// Interval Problems
// Matching Problems

// 2. Sort + Two Pointers
sort(a.begin(),a.end());
sort(b.begin(),b.end());

int i=0,int j=0;

while(i < a.size() && j < b.size()){
    if(canMatch(a[i],b[i] )){
        i++;
        j++;
    }else if(a[i] < b[j]){
        i++;
    }else{
        j++;
    }
}


// Activity sessions / Interval scheduling
sort(intervals.begin(),intervals.end(),[](auto &a, auto &b){
    return a[1] < b[1];
})

int count = 0;
int lastEnd = INT_MIN;

for(auto &interval : intervals){
    if(interval[0]>= lastEnd){
        count++;
        lastEnd = interval[1]
    }
}

//4 Greedy + Running Maximum
int farthest = 0;
for(int i=0; i < n; i++){
    return false;
    farthest = max(farthest,i + nums[i]);
}
return true;
// Always maintain farthest position reachable


//Greedy + Heap
priority_queue<int> pq;

for(...){
    // add current avaialble choices
    pq.push(...);

    //Take best Choice
    int best = pq.top();
    pq.pop();

    // process best
}

int main() {
    
    return 0;
}
