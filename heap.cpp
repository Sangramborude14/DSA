#include <iostream>
#include <string>
#include<vector>
using namespace std;

void print(vector<int>& vc){
    for (int i : vc){
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v1 = {20,30,40,25,15};

    //convert heap into vector
    make_heap(v1.begin(),v1.end());

    //Display the maximum element of heap
    cout << "Maximum element" << v1.front() << endl;

    cout << "Initial Heap: ";
    print(v1);

    v1.push_back(50);
    cout <<"Heap just after push_back element: " << endl;
    print(v1);

    push_heap(v1.begin(),v1.end());
    cout << "Heap after push_heap(): " << endl;
    print(v1);

    pop_heap(v1.begin(),v1.end());
    cout << "Heap after pop_heap() " << endl;
    print(v1);

    v1.pop_back();
    cout << "Heap after pop_back() " << endl;
    print(v1);
    return 0;

    sort_heap(v1.begin(),v1.end());
    cout << "Heap after sorting: "<< endl;
    print(v1);
}