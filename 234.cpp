#include <iostream>
#include <string>
using namespace std;

  class ListNode {
  public:
    int data;
    ListNode *next;

    ListNode(int new_data) {
      this->data = new_data;
      this->next = nullptr;
    }
  };
  

bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

 // Find the middle
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse the second half 
        ListNode* prev = nullptr;
        ListNode* curr = slow;
        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }


        ListNode* first = head;
        ListNode* second = prev;
        
        while (second) {
            if (first->val != second->val) {
                return false;
            }
            first = first->next;
            second = second->next;
        }

        return true;
    }

int main() {
    
    return 0;
}