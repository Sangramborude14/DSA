#include <iostream>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int depth(TreeNode* root, int& maxDiameter){
    if(root == nullptr || !root) return 0;

    int leftDepth = depth(root->left,maxDiameter);
    int rightDepth = depth(root->right,maxDiameter);

    int max_diameter = max(maxDiameter,leftDepth + rightDepth);

    return 1 + max(leftDepth,rightDepth);
}

int diameterOfBinaryTree(TreeNode* root) {
    int maxDiameter = 0;
    depth(root,maxDiameter);
    return maxDiameter;
    return 0;
}

int main() {

    return 0;
}
