#include <iostream>
#include <string>
using namespace std;

bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr) return true;
        
        if(p->val != q->val) return false;
        if(isSameTree(p->left,q->left) && isSameTree(p->right,q->right)) return true;
        return false;
    }
bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == nullptr && subRoot != nullptr)return false;
        if(isSameTree(root,subRoot)){
            return true;
        }
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }

int main() {
    
    return 0;
}