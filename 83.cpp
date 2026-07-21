#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int new_data) {
    this->data = new_data;
    this->next = nullptr;
  }
};

Node* deleteDuplicates(Node* head) {
    Node* temp = head;
    if(temp == nullptr)return nullptr;
    while(temp->next != nullptr){
        if(temp->data == temp->next->data){
        temp->next = temp->next->next;
        continue;
    }
    temp = temp->next;
    }
    return head;
    }

int main() {

    return 0;
}