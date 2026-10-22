#include <iostream>
#include <string>
using namespace std;


class Solution {
    std::unordered_map<int, int> in_map;
    int post_idx;

    TreeNode* helper(int in_left, int in_right, const std::vector<int>& postorder) {
        if (in_left > in_right) {
            return nullptr;
        }

        int root_val = postorder[post_idx--];
        TreeNode* root = new TreeNode(root_val);

        int index = in_map[root_val];

        root->right = helper(index + 1, in_right, postorder);
        root->left = helper(in_left, index - 1, postorder);

        return root;
    }

public:
    TreeNode* buildTree(std::vector<int>& inorder, std::vector<int>& postorder) {
        post_idx = postorder.size() - 1;
        for (int i = 0; i < inorder.size(); ++i) {
            in_map[inorder[i]] = i;
        }
        return helper(0, inorder.size() - 1, postorder);
    }
};

int main() {
    
    return 0;
}