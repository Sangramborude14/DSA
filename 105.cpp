#include <iostream>
#include <string>
using namespace std;

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> inMap;
        for (int i = 0; i < inorder.size(); ++i) {
            inMap[inorder[i]] = i;
        }
        
        int preIndex = 0;
        return build(preorder, 0, inorder.size() - 1, preIndex, inMap);
    }
TreeNode* build(const vector<int>& preorder, int inStart, int inEnd, 
                    int& preIndex, const unordered_map<int, int>& inMap) {
        if (inStart > inEnd) {
            return nullptr;
        }
        int rootVal = preorder[preIndex++];
        TreeNode* root = new TreeNode(rootVal);
        int mid = inMap.at(rootVal);
        root->left = build(preorder, inStart, mid - 1, preIndex, inMap);
        root->right = build(preorder, mid + 1, inEnd, preIndex, inMap);

        return root;
    }

int main() {
    
    return 0;
}