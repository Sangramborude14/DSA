#include <iostream>
#include <string>
using namespace std;

int height(TreeNode* root){
    if(root == nullptr) return 0;

    int leftHeight = checkHeight(root->left);
    if(leftHeight == -1) return -1;

    int rightHeight = checkHeight(root->right);
    if(rightHeight == -1) return -1;

    if(abs(leftHeight - rightHeight) > 1) return -1;

    return 1 + max(leftHeight,rightHeight);
}

bool isBalanced(TreeNode* root) {
        return height(root) == -1;
    }

int main() {
    
    return 0;
}