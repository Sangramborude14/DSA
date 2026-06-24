 #include <iostream>
 #include <string>
 #include <vector>
 using namespace std;

 //Node
 struct TreeNode {
    int val;
    TreeNode* right;
    TreeNode* left;

    TreeNode(int x){
        val = x;
        left = nullptr;
        right = nullptr;
    };
};

TreeNode* invertTree(TreeNode* root){
    if(root == nullptr) return root;
    auto extended = root->right;
    root->right = root->left;
    root->left = extended;

    cout << root->val << " ";
    invertTree(root->left);
    invertTree(root->right);
    return root;
}
 
 int main() {
    int root[7] = [4,2,7,1,3,6,9];
    invertTree(root);

     return 0;
 }