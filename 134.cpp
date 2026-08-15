#include <iostream>
#include <string>
#include <vector>
using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int totalGas = 0;
        int totalCost = 0;

        for (int i = 0; i < gas.size(); i++) {
            totalGas += gas[i];
            totalCost += cost[i];
        }

   if(totalCost > totalGas){
    return -1;
   }

   int tank = 0;
   int start = 0;

for(int i=0;i < gas.size();i++){
    tank += gas[i] - cost[i];

    if(tank < 0){
        start = i + 1;
        tank = 0;
    }
}
return start;

}

int main() {
    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};
    cout << canCompleteCircuit(gas,cost);
    return 0;
}