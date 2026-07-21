#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    for (int i = 0; i < strs[0].size(); i++) {
        char c = strs[0][i];

        for (int j = 1; j < strs.size(); j++) {
            if (i >= strs[j].size() || strs[j][i] != c) {
                return strs[0].substr(0, i);
            }
        }
    }

    return strs[0];
}

int main() {
    vector<string> test1 = {"flower", "flow", "flight"};
    cout << "Test 1: " << longestCommonPrefix(test1) << " (Expected: \"fl\")" << endl;

    vector<string> test2 = {"dog", "racecar", "car"};
    cout << "Test 2: " << longestCommonPrefix(test2) << " (Expected: \"\")" << endl;

    return 0;
}
