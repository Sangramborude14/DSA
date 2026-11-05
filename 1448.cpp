#include <iostream>
#include <string>
using namespace std;

int helper(TreeNode* root,int maxSoFar){
    if(root == nullptr) return 0;
    int count = (root->val >= maxSoFar) ? 1 : 0;
        int newMax = max(maxSoFar,root->val);
        return count + helper(root->left,newMax) + helper(root->right, newMax);
}

int goodNodes(TreeNode* root) {
    return helper(root,INT_MIN);
}


int goodNodes(TreeNode* root) {
        return helper(root,INT_MIN,0);
    }

int main() {
    
    return 0;
}