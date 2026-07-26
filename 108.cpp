#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* helper(vector<int>& nums,int start,int end) {
      if(start > end) return nullptr;
      
      int middle = start + (end - start) / 2;
      TreeNode* node = new TreeNode(nums[middle]);
      node->left = helper(nums,start, middle - 1);
      node->right = helper(nums,middle + 1,end);
      return node;
    };
    TreeNode* sortedArrayToBST(vector<int>&nums){
        return helper(nums,0,nums.size() - 1);  
    }
};

int main() {
    Solution solver;
    // Example test case:
    vector<int> nums = {-10, -3, 0, 5, 9};
    TreeNode* root = solver.sortedArrayToBST(nums);
    cout << "Tree successfully constructed. Root val: " << (root ? to_string(root->val) : "null") << endl;
    return 0;
}
