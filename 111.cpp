#include <iostream>
#include <string>
using namespace std;

 int minDepth(TreeNode* root){
    if(root == nullptr) return 0;
    if(root->left == nullptr && root->right == nullptr) return 1 ;
    if(root->right == nullptr) return 1 + minDepth(root->left);
    if(root->left == nullptr) return 1 + minDepth(root->right);
    return 1 + min(minDepth(root ->left),minDepth(root->right));
}

int main() {
    
    return 0;
}