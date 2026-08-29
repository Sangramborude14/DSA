#include <iostream>
#include <algorithm>
using namespace std;

/*
 * 543. Diameter of Binary Tree (Easy)
 * https://leetcode.com/problems/diameter-of-binary-tree/
 * 
 * Given the root of a binary tree, return the length of the diameter of the tree.
 * The diameter of a binary tree is the length of the longest path between any two nodes in a tree. 
 * This path may or may not pass through the root.
 * The length of a path between two nodes is represented by the number of edges between them.
 * 
 * Example 1:
 * Input: root = [1,2,3,4,5]
 * Output: 3
 * Explanation: 3 is the length of the path [4,2,1,3] or [5,2,1,3].
 * 
 * Example 2:
 * Input: root = [1,2]
 * Output: 1
 */

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int diameterOfBinaryTree(TreeNode* root) {
    // TODO: Implement the solution
    return 0;
}

int main() {
    // Construct test tree:
    //      1
    //     / \
    //    2   3
    //   / \
    //  4   5
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Diameter of Binary Tree: " << diameterOfBinaryTree(root) << endl;

    // Clean up memory
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
