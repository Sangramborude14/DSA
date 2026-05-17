#include<iostream>
using namespace std;

int main(){

    int x = 5;
    int y = 6;

    cout << x + y << "\n"; //arithmatic operator
    cout << (x > y)<<"\n"; //comparison operator
    x += 3;         //assignment operator
    cout<< (x > 5 && y > 5)<< "\n";//logical operator
    cout << (3+4*5)/3 << "\n"; //BORDMAS
    return 0;
}