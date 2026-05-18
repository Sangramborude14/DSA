#include <iostream>
#include <string>
using namespace std;

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}

int main() {
    int answer1 = factorial(5);
    cout << answer1 << "\n";
    return 0;
}
