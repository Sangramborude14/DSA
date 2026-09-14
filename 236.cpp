#include <iostream>
#include <string>
using namespace std;

  TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == nullptr) return nullptr;
        if(root == p || root == q) return root;
        TreeNode* left = lowestCommonAncestor(root->left,p,q);
        TreeNode* right = lowestCommonAncestor(root->right,p,q);
        if(left == nullptr && right == nullptr)return nullptr;
        if(left != nullptr && right != nullptr) return root;
        if(left != nullptr && right == nullptr) return left;
        if(right != nullptr && left == nullptr) return right;
        return root;
    }

int main() {
    
    return 0;
} 