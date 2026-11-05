#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* right;
    TreeNode* left;

    TreeNode(int x){
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

void traverse(vector<vector<int>>& res, TreeNode* root,int level){
    if(root == nullptr) return;

    if(res.size() <= level) res.push_back({});


    res[level].push_back(root->val);

    traverse(res,root->left,level+1);
    traverse(res,root->right,level+1);
}

vector<vector<int>> levelOrder(TreeNode* root){
    vector<vector<int>>res;
    traverse(res,root,0);
    return res;
}

int main() {
    
    return 0;
}