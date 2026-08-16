#include <iostream>
#include <vector>
#include <queue>

using namespace std;

/*
 * -----------------------------------------------------------------------------
 * LeetCode 112: Path Sum (Easy)
 * -----------------------------------------------------------------------------
 * Given the root of a binary tree and an integer targetSum, return true if the 
 * tree has a root-to-leaf path such that adding up all the values along the 
 * path equals targetSum.
 * 
 * A leaf is a node with no children.
 * 
 * Example 1:
 *   Input: root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
 *   Output: true
 *   Explanation: The root-to-leaf path with the target sum is 5 -> 4 -> 11 -> 2.
 * 
 * Example 2:
 *   Input: root = [1,2,3], targetSum = 5
 *   Output: false
 *   Explanation: There are two root-to-leaf paths in the tree:
 *   (1 -> 2): sum = 3
 *   (1 -> 3): sum = 4
 *   There is no root-to-leaf path with sum = 5.
 * 
 * Example 3:
 *   Input: root = [], targetSum = 0
 *   Output: false
 * -----------------------------------------------------------------------------
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
  if (root == nullptr)
            return false;


        if (root->left == nullptr && root->right == nullptr) {
            return targetSum == root->val;
        }


        return hasPathSum(root->left, targetSum - root->val) ||
               hasPathSum(root->right, targetSum - root->val);
        
        return false;
    }
};

// Helper function to build a binary tree from a level-order vector
// Use -1 (or any sentinel) to represent null nodes
TreeNode* buildTree(const vector<int>& nodes) {
    if (nodes.empty() || nodes[0] == -1) return nullptr;
    
    TreeNode* root = new TreeNode(nodes[0]);
    queue<TreeNode*> q;
    q.push(root);
    
    int i = 1;
    while (!q.empty() && i < nodes.size()) {
        TreeNode* current = q.front();
        q.pop();
        
        // Left child
        if (i < nodes.size() && nodes[i] != -1) {
            current->left = new TreeNode(nodes[i]);
            q.push(current->left);
        }
        i++;
        
        // Right child
        if (i < nodes.size() && nodes[i] != -1) {
            current->right = new TreeNode(nodes[i]);
            q.push(current->right);
        }
        i++;
    }
    
    return root;
}

// Helper function to clean up allocated tree memory
void deleteTree(TreeNode* root) {
    if (root == nullptr) return;
    deleteTree(root->left);
    deleteTree(root->right);
    delete(root);
}

int main() {
    Solution solution;
    
    // Test Case 1:
    // Tree: [5, 4, 8, 11, -1, 13, 4, 7, 2, -1, -1, -1, 1]
    // targetSum = 22
    // Path: 5 -> 4 -> 11 -> 2 = 22 (True)
    vector<int> tree1 = {5, 4, 8, 11, -1, 13, 4, 7, 2, -1, -1, -1, 1};
    TreeNode* root1 = buildTree(tree1);
    bool result1 = solution.hasPathSum(root1, 22);
    cout << "Test Case 1: " << (result1 ? "PASSED" : "FAILED") << " (Expected: PASSED)" << endl;
    deleteTree(root1);
    
    // Test Case 2:
    // Tree: [1, 2, 3]
    // targetSum = 5 (False)
    vector<int> tree2 = {1, 2, 3};
    TreeNode* root2 = buildTree(tree2);
    bool result2 = solution.hasPathSum(root2, 5);
    cout << "Test Case 2: " << (!result2 ? "PASSED" : "FAILED") << " (Expected: PASSED)" << endl;
    deleteTree(root2);

    return 0;
}
