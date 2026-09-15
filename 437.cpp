#include <iostream>
#include <string>
using namespace std;

int CountFrom(TreeNode* root, long long targetSum){
    if(root == nullptr) return 0;

    int count = 0;

    if(root->val == targetSum) count++;

    count += CountFrom(root->left,targetSum - root->val);
    count += CountFrom(root->right,targetSum - root->right);
    return count;
}


int pathSum(TreeNode* root, int targetSum) {
        if(root == nullptr) return 0;

        return CountFrom(root,targetSum) + pathSum(root->left,targetSum) + pathSum(root->right,targetSum);
        
    }


int main() {
    
    return 0;
}