#include <iostream>
#include <string>
using namespace std;

void explainStack() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);
        
    cout << st.top();
    st.pop();

    cout << st.top();

    cout << st.size();
    cout << st.empty();
}

int main() {
    
    return 0;
}