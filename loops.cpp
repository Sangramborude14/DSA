#include <iostream>
#include <string>
using namespace std;

int main() {
    //while
    int x = 1;
    while(x < 5){
        cout << x << " ";
        x++; // Added increment to prevent infinite loop
    }
    cout << "\n";

    //do-while
    int y = 1; // Used new variable to verify do-while execution
    do{
        cout << y << " ";
        y++; // Added increment to prevent infinite loop
    }while(y < 5);
    cout << "\n";

    //for 
    for (int i = 0; i < 5; i++){
        cout << i << " "; // Corrected pointer arithmetic print statement
    }
    cout << "\n";

    //nested for
    for (int i = 0; i < 5; i++){
        for(int j=0; j <= i; j++){
            cout << "* ";
        }
        cout << "\n";
    }

    //foreach
    int myNumber[5] = {1,2,3,4,5};
    for (int num: myNumber){
        cout << num << " ";
    }
    cout << "\n";

    //break
    for(int i = 0; i < 5; i++){
        if(i == 4){
            break;
        };
        cout << i << " ";
    }
    cout << "\n";

    for (int i = 0;i < 4; i++){
        if (i == 2){
            continue;
        };
        cout << i << " ";
    }

    return 0;
}