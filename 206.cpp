#include <iostream>
#include <string>
using namespace std;

Node *reverse(Node* head){
    while(head != nullptr){
        Node *curr = head,*prev = nullptr,*next;

        while(*curr != nullptr){

            next = curr->next;

            curr->next = prev;

            prev = curr;
            curr = next;
        }
        return prev;
    }
}

int main() {
    
    return 0;
}