#include <iostream>
#include <string>
using namespace std;

int main() {
    string greeting = "hello how are you \n";
    string firstName = "Sangram ";
    string lastName = "Borude" ;
    string fullName = firstName + lastName; //concatenation
    cout << fullName
    << "\n";
    fullName = firstName.append(lastName);//append
    cout << fullName
    << "\n";
    cout << fullName.length();
    cout << fullName[0];
    string specialChar = "hello \"Sangram\" how are you?";
    cout << specialChar
    << "\n";
    char array1[] = "Sangram";

}