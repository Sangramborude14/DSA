#include <iostream>
#include <string>
using namespace std;

vector<int>RemoveElement(vector<int> array1){
    int i = 1;
    while(i < size(array1)){
        for(int j = i ; j < size(array1); j++){
            if(array1[i] == array1[j]){
                array1.erase(array1.begin() + j);
            }
        }
         i++;
    }

    return array1;
}

int main() {
    
    return 0;
}