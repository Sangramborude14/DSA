#include <iostream>
#include <string>
using namespace std;

vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        if(!root) return paths;

        string current_path = "";
        dfs(root,current_path,  paths);
        return paths;
    }

    void dfs(TreeNode* node,string &path,vector<string>&paths){
        int original_len = path.length();

        path += to_string(node->val);

        if(!node->left && !node->right){
            paths.push_back(path);
        }else{
            path += "->";
            if(node->left) dfs(node->left,path,paths);
            if(node->right) dfs(node->right,path,paths);
        }
        path.resize(original_len);   
    }

int main() {
    
    return 0;
}