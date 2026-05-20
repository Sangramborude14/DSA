#include <iostream>
#include <string>
using namespace std;

void pattern1(int n){
    for(int i = 0; i< n ; i++){
        for(int j=0; j< 4; j++){
            cout << "* ";
        }
        cout << "\n";
    };
}

void pattern2(int n){
    for(int i = 0 ;i < n; i++){
        for(int j=0;j <= i ; j++){
            cout << "* ";
        }
        cout << "\n";   
    }
}
void pattern3(int n){
    for(int i=0;i<=n;i++){
        for(int j =1;j<=i;j++){
            cout << j << " ";
        };
        cout <<"\n";
    };
}

void pattern4(int n){
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << "\n";
    }
}

void pattern5(int n){
    for(int i=0; i <= n ; i++){
        for(int j = n-i; j > 0 ; j--){
            cout << "*" << " ";
        };
        cout << "\n";
    };
}

void pattern6(int n){
    for(int i=0; i < n; i++){
      //space
      for(int j=0; j < n-i-1;j++){
        cout << " ";
      };
      for(int j=0; j < 2*i + 1;j++){
        cout << "*";
      };
      for(int j=0; j < n-i-1;j++){
        cout << " ";
      }
      cout << "\n";
    };
}

void pattern7(int n){
    for(int i=0; i<n ; i++){

        for(int j=0; j<i ; j++){
            cout << " ";
        };
        
        for(int j=0; j< 2*(n-i-1)+1 ; j++ ){
            cout << "*";
        };
        
        for(int j=0; j<i ; j++){
            cout << " ";
        };
        cout << "\n";
        
    }
}

void pattern8(int n){
    for(int i=1 ;i <= 2*n-1; i++){
        int stars = i;
        if(i > n) stars = 2*n-i ;
        for(int j=1; j<= stars; j++){

        }
    } ;
}

void pattern9(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            // If i and j are both even or both odd, prints 1, else 0
            cout << ((i + j) % 2 == 0 ? "1 " : "0 ");
        }
        cout << "\n";
    }
}

void pattern10(int n){
    for(int i=0; i < n; i++){
        for(int j=0; j < 2*n-1;j++){
            ((j == 0)||(2*n-2)) ? cout << "1" : cout << " ";
        };
    }
}
int main() {
    // for the outer loop count the number of rows
    // for the inner loop focus on the coloumn and connect them to the rows
    // print in the inside loop
    //observe symmetry

    pattern1(5);
    pattern2(5);
    pattern3(5);
    pattern4(5);
    pattern5(5);
    pattern6(5);
    pattern7(5);
    pattern8(5);
    pattern9(5);
    pattern10(4);
    return 0;
}