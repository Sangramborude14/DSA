#include <iostream>
#include <string>
using namespace std;

int main() {
    // refrence

    string food = "Pizza";
    string &meal = food; 
    cout << food << "\n";
    cout << meal << "\n";

    meal = "Burger";

    cout << food << "\n";
    cout << meal << "\n";  

    //pointers
    
    cout << &food;
    
    string* ptr = &food;
    cout << ptr <<"\n"; //memory address
    cout << *ptr <<"\n";//dereferncing

    *ptr = "hello"; //updating pointer value
    cout << *ptr << "\n";
    return 0;
}