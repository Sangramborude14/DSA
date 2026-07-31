#include <iostream>
#include <string>
#include<vector>
using namespace std;

int largestAltitude(vector<int>& gain) {
        int prevAltitude = 0;
        int highest = 0;
        vector<int> altitude;
        for(int i : gain){
            altitude.push_back(prevAltitude + i);
            prevAltitude = altitude.back();
            if(prevAltitude > highest) highest = prevAltitude;
        }
        return highest;
    }

int main() {
    vector<int> gain = {-5,1,5,0,-7};
    cout << largestAltitude(gain)<<endl;
    return 0;
}