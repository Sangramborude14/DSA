#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

class KthLargest {
  

public:
 int k;
    // Min-heap to store the k largest elements
    priority_queue<int, vector<int>, greater<int>> minHeap;
    KthLargest(int k, vector<int>& nums) {
    this->k = k;
   for(int i : nums){
    minHeap.push(i);
   }
   while(minHeap.size() > k){
    minHeap.pop();
   }
};
   // now minHeap.top() is the k largest element and the smallest in the heap
    
    int add(int val) {
    minHeap.push(val);
    if(minHeap.size() > k){
        minHeap.pop();
        return minHeap.top();
    }else{
        return minHeap.top();
    }
    }
};

int main() {
    vector<int> nums = {4, 5, 8, 2};
    int k = 3;
    
    cout << "Initializing KthLargest with k = " << k << " and nums = {4, 5, 8, 2}" << endl;
    KthLargest kthLargest(k, nums);
    
    cout << "add(3)  -> " << kthLargest.add(3) << " (Expected: 4)" << endl;
    cout << "add(5)  -> " << kthLargest.add(5) << " (Expected: 5)" << endl;
    cout << "add(10) -> " << kthLargest.add(10) << " (Expected: 5)" << endl;
    cout << "add(9)  -> " << kthLargest.add(9) << " (Expected: 8)" << endl;
    cout << "add(4)  -> " << kthLargest.add(4) << " (Expected: 8)" << endl;
    
    return 0;
}