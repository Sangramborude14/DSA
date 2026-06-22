#include <iostream>
#include <string>
using namespace std;

class ListNode {
public:
  int data;
  Node *next;

  ListNode(int new_data) {
    this->data = new_data;
    this->next = nullptr;
  }
};

bool hasCycle(ListNode *head){
    ListNode* slow = head;
    ListNode* fast = head;

    do(
        slow = slow->next;
        fast = fast->next->next;

        if(fast->next == nullptr) return false;
    )while(slow != fast);
    return true;
}

int main() {
    
    return 0;
}