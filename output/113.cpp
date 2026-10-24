#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> paths;
        vector<int> currentPath;
        dfs(root, targetSum, currentPath, paths);
        return paths;
    }

private:
    void dfs(TreeNode* node, int remainingSum, vector<int>& currentPath, vector<vector<int>>& paths) {
        if (!node) return;

        currentPath.push_back(node->val);

        if (!node->left && !node->right && remainingSum == node->val) {
            paths.push_back(currentPath);
        } else {
            dfs(node->left, remainingSum - node->val, currentPath, paths);
            dfs(node->right, remainingSum - node->val, currentPath, paths);
        }

        currentPath.pop_back();
    }
};

int main() {
    
    return 0;
}