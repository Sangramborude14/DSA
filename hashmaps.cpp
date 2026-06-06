#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string,int> hashmap1;
    hashmap1["apple"] = 3;
    hashmap1["banana"] = 4;

    cout << "no of apples are: "<< hashmap1["apple"] << "\n";
    cout << "is there banana in hashmap1 ?? "<< hashmap1.count("banana")<<"\n";
    hashmap1.erase("apple");
    cout << "deleting apple key" << "\n";

    return 0;
}