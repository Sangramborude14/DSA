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
  node->val = node->next->val;// copy the value of next node into current
  node->next = node->next->next; //skip the next node and directly point from current to next->next
    }

  
int main() {
    
    return 0;
}