#include <iostream>
#include <string>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* right;
    TreeNode* left;

    TreeNode(int x){
        val = x;
        left = nullptr;
        right = nullptr;
    }
};


 TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

    TreeNode* current = root;

    while(current->right !=nullptr || current->left != nullptr){
        if( p->val > current->val && q->val > current->val){
        current = current->right;
    }else if(p->val < current->val && q->val < current->val){
        current = current->left;
    }else{
        return current;
    }

    }
    return current;
        };
    

int main() {
    
    return 0;
}