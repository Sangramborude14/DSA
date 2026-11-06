#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return nullptr;
        
        Node* leftmost = root;
        
        while (leftmost->left) {
            Node* curr = leftmost;
            while (curr) {
                curr->left->next = curr->right;
                if (curr->next) {
                    curr->right->next = curr->next->left;
                }
                curr = curr->next;
            }
            leftmost = leftmost->left;
        }
        
        return root;
    }
};

int main() {
    
    return 0;
}