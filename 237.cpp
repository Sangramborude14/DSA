#include <iostream>
#include <string>
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

 void deleteNode(Node* node) {
        
    while(node->next != nullptr){
        node->data = node->next->data;
        node = node->next;
        if(node->next == nullptr){
          node = nullptr;
        }
    }
    }

int main() {
    
    return 0;
}