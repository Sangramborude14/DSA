#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 5;
    if( x > 3){
        cout << "x is greater than 3\n";
    }else if(x > 2){
        cout << "x is greater than 2\n";
    }else{
        cout << "x is lesser than 2\n";
    };

    string time = ( x > 12) ? "PM": "AM";//ternary operator

    if(x > 2){ // nested if
        cout<< "x is greater than 2\n";
        if(x >3){
            cout<< "x is greater than 3\n";
        }
    }
    int a = 100;
    int b = 50;
    int c = 300;

    if( a > b && c > b){ //and operator
        cout << "both conditon are true\n";
    };

    if(a > b || c < b){ //or operator
        cout << "any one is true\n";
    };

    int day = 4;
    switch (day){
        case 1:
        cout << "Monday";
        break;
        case 2:
        cout << "Tuesday";
        break;
        case 3:
        cout << "wednesday";
        break;
        default:
        cout << "lol";  
    }
    return 0;
}