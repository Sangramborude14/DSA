#include <iostream>
#include <string>
using namespace std;

int Sum(TreeNode* root, int& maxSum){
    if(root == nullptr) return 0;
    
    int leftSum = Sum(root->left,maxSum);
    int rightSum = Sum(root->right,maxSum);
     
    int currentSum = root->val + leftSum + rightSum;
    maxSum = max(currentSum,maxSum);
    
    return root->val + max(leftSum,rightSum);
}

int maxPathSum(TreeNode* root){
    int maxSum = 0;
    Sum(root,maxSum);
    return maxSum;
}

int main() {
    
    return 0;
}