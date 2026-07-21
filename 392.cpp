#include <iostream>
#include <string>

using namespace std;

bool isSubsequence(string s, string t) {
 bool isSubsequence(string s, string t) {
        int i = 0, j = 0;

        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }

        return i == s.size();
    }
    return false;
}

int main() {
    string s1 = "abc", t1 = "ahbgdc";
    cout << "Test 1: " << (isSubsequence(s1, t1) ? "true" : "false") << " (Expected: true)" << endl;

    string s2 = "axc", t2 = "ahbgdc";
    cout << "Test 2: " << (isSubsequence(s2, t2) ? "true" : "false") << " (Expected: false)" << endl;

    return 0;
}
