#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(2);
    vector<int>::iterator it = v.begin();
    it++;
    cout<< *(it) <<" ";

    for(vector<int>::iterator it =  v.begin();it != v.end(); it++){
        cout <<*(it) << " ";
    };
    cout << "\n";
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
    cout << "\n";
    for(auto it : v){
        cout << it << " ";
    }

    //delete
    v.erase(v.begin() + 1);

    //insert
    v.insert(v.begin(),300);
    v.insert(v.begin() + 1,2,10);

    //inserting a vector into another vector
    vector<int> copy(2,50);
    v.insert(v.begin(), copy.begin(), copy.end());
    
    cout << "\n";

    cout << v.size();
    v.pop_back();
    
    v.clear();
    cout << "\n";
    cout << v.empty();
    return 0;
}