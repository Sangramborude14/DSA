#include <iostream>
#include <string>
using namespace std;

void pattern2(int n){
    for(int i = 0 ;i < n; i++){
        for(int j=0;j <= i ; j++){
            cout << "* ";
        }
        cout << "\n";   
    }
}

int main() {
    // for the outer loop count the number of rows
    // for the inner loop focus on the coloumn and connect them to the rows
    // print in the inside loop
    //observe symmetry
    
    //pattern1
    for(int i = 0; i< 4 ; i++){
        for(int j=0; j< 4; j++){
            cout << "* ";
        }
        cout << "\n";
    };

    //pattern2
    pattern2(5);
    return 0;
}