#include <iostream>
#include <string>
#include<unordered_map>
#include<vector>
using namespace std;

bool lemonadeChange(vector<int>& bills) {
   int five = 0;
    int ten = 0;

    for (int bill : bills) {
        switch (bill) {
            case 5:
                five++;
                break;
            case 10:
                if (five >= 1) {
                    ten++;
                    five--;
                } else {
                    return false;
                }
                break;
            case 20:
                if (ten >= 1 && five >= 1) {
                    ten--;
                    five--;
                } else if (five >= 3) {
                    five -= 3;
                } else {
                    return false;
                }
                break;
        }
    }
    return true;
    }


int main() {
    vector<int>bills = {5,5,5,10,20};
    cout << lemonadeChange(bills);
    return 0;
}