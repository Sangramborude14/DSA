#include <iostream>
#include <string>
#include<vector>
#include<queue>
using namespace std;

int lastStoneWeight(vector<int>& stones) {
    priority_queue<int> pq;
      for(int i : stones){
        pq.push(i);
      }
      if(pq.size() == 1)return pq.top();
      while(pq.size() > 1){
        int y = pq.top();
        pq.pop();
        int x = pq.top();
        pq.pop();
        if(y != x) pq.push(y-x);
      }
      if(!pq.empty()) return pq.top();
      return 0;

    };


int main() {
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(2);
    pq.push(7);
    pq.push(4);
    pq.push(1);
    pq.push(8);
    pq.push(1);
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    vector<int>stones = {2,7,4,1,8,1};
    cout << "\n";
    int result = lastStoneWeight(stones);
    cout << result << "\n";
    
    return 0;
}