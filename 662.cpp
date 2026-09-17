#include <iostream>
#include <string>
using namespace std;

 int widthOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;

        queue<pair<TreeNode*, unsigned long long>> q;
        q.push({root,0});

        unsigned long long maxWidth = 0;

        while(!q.empty()){
            int levelSize = q.size();

            unsigned long long first = q.front().second;
            unsigned long long last = first;

            for(int i = 0; i < levelSize; i++){
                auto [node,index] = q.front();
                q.pop();

                last = index;

                if(node->left) q.push({node->left, 2 * index + 1});

                if(node->right) q.push({node->right,2 * index + 2});
            }
            maxWidth = max(maxWidth, last - first + 1);
        }
        return (int)maxWidth;
    }

int main() {
    
    return 0;
}