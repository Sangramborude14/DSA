#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class ListNode {
public:
  int val;
  ListNode *next;

  ListNode(int new_data) {
    this->val = new_data;
    this->next = nullptr;
  }
};

ListNode* middleNode(ListNode* head) {

   ListNode* fast = head;
   ListNode* slow = head;
   
   while(fast->next != nullptr || fast != nullptr){
    slow = slow->next;
    fast = fast->next->next;
   }
   return slow;

    }


int main() {
        
    return 0;
}