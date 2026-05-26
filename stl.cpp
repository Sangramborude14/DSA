#include<bits/stdc++.h>
using namespace std;

int main() {
    //pair
    pair<int, int>p = {1,3};
    //nested pair
    pair<int,pair<int, int>> q = {1,{2,3}};
    cout << p.first <<" "<< p.second;
    cout << " ";
    cout << q.first <<" "<< q.second.first<<" "<< q.second.second;

    
    return 0;
}