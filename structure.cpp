#include <iostream>
#include <string>
using namespace std;

int main() {
    // structure are a way to group several related variable into one place

    struct{
        int myNum;
        string myString;
    }myStructure;

    myStructure.myNum = 1;
    cout << myStructure.myNum << "\n";
    myStructure.myString = "hello there";
    cout << myStructure.myString << "\n";

    struct{
        int age;
        string name;
    }myInfo1,myInfo2,myInfo3;

    myInfo1.age = 18;
    myInfo1.name = "sangram";
    myInfo2.age = 16;
    myInfo2.name = "Mario";
    
    cout << "name: " << myInfo1.name << "\n";
    cout << "age: "  << myInfo1.age << "\n";

    return 0;
}