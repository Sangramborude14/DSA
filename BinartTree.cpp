#include <iostream>
#include <string>
using namespace std;

// Node
struct TreeNode {
    int val;
    TreeNode* right;
    TreeNode* left;

    TreeNode(int x){
        val = x;
        left = nullptr;
        right = nullptr;
    }
}

//preorder tranversal
void preorder(TreeNode* root){
    if(root == nullptr) return;

    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder Traversal
void inorder(TreeNode* root){
    if(root == nullptr) return;

    inorder(root->left);
    cout << root->val << "";
    inorder(root->right);
}

// Postorder Traversal
void  postorder(TreeNode* root){
    if(root == nullptr) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

// level order Traversal(BFS)
vector<int> levelOrder(TreeNode* root){
    vector<int>ans;

    if(root == nullptr)
    return ans;

    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode* node = q.front();
        q.pop();
        ans.push_back(node->val);

        if(node->left) q.push(node->left);
        if(node->right) q.push(node->right);

    }
    return ans;
}

//height of Tree: Longest path from root to leaf


int main() {
    
    return 0;
}