#include <iostream>
#include <string>
using namespace std;

bool validate(TreeNode* root, long long lo, long long high){
    if(root == nullptr) return true;
    if(root->val <= lo || root->val >= high) return false;
    return validate(root->left,lo,root->val) && validate(root->right,root->val,high);
}

bool isValidBST(TreeNode* root) {
        return validate(root,LLONG_MIN, LLONG_MAX);
    }

int main() {
    
    return 0;
}