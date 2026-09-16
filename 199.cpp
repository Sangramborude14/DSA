#include <iostream>
#include <string>
using namespace std;

 vector<int> rightSideView(TreeNode* root) {
       vector<int> rightSide;

       if(root == nullptr) return rightSide;

       queue<TreeNode*> q;
       q.push(root);

       while(!q.empty()){
        int levelSize = q.size();

        for(int i = 0; i < levelSize; i++){
            TreeNode* node = q.front();
            q.pop();


            if(i == levelSize - 1) rightSide.push_back(node->val);

            if(node->left != nullptr) q.push(node->left);
            if(node->right != nullptr) q.push(node->right);
        }
       }
       return rightSide;
    }

int main() {
    
    return 0;
}