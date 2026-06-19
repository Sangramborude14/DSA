#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
unordered_set<int>   us;

// Inserting Elements
us.insert(3);
us.insert(2);
us.insert(1);   

// Accessing Elements
auto third = next(us.begin(),1);
cout << *third << "\n";

// Updating Elements
us.erase(2);
us.insert(10);

//Finding Elements
auto two = us.find(10);
cout << *two << "\n";

//traversing Element
for(auto i = us.begin(); i != us.end(); i++){
    cout << *i << "\n";
}

    return 0;
}