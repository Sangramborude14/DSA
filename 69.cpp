#include <iostream>
#include <string>
using namespace std;

    int mySqrt(int x) {
        long long low = 0;
        long long high = x;

        while(low < high){
        long long mid = low + (high - low)/2;
        if(mid*mid > x){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
        }
        return low ;
    }

int main() {
cout << mySqrt(8);
    return 0;
}