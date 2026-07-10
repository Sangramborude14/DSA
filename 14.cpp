#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    // Write your code here
    return "";
}

int main() {
    vector<string> test1 = {"flower", "flow", "flight"};
    cout << "Test 1: " << longestCommonPrefix(test1) << " (Expected: \"fl\")" << endl;

    vector<string> test2 = {"dog", "racecar", "car"};
    cout << "Test 2: " << longestCommonPrefix(test2) << " (Expected: \"\")" << endl;

    return 0;
}
