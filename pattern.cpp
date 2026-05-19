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
    return 0;
}