#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // 1. Standard C++ Array
    cout << "--- Standard Array Elements ---" << "\n";
    string cars[4] = {"volvo","mercedes","BMW","Ford"};
    cout << sizeof(cars) << "\n";
    for(int i = 0; i < 4; i++){
        cout << cars[i] << "\n";
    }
    cout << "\n";

    // 2. Dynamic C++ Vector (Renamed to 'carsVector' to avoid naming conflict)
    cout << "--- Dynamic Vector Elements ---" << "\n";
    vector<string> carsVector = {"volvo","BMW","Ford"};
    carsVector.push_back("Tesla"); // Adds "Tesla" dynamically at the end
    // Print vector elements using range-based for loop
    for(string car : carsVector){
        cout << car << "\n";
    }

    return 0;
}
