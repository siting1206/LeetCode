/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int check = 0;
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root != nullptr){
            root->val = targetSum-root->val;
            if(root->val == 0 && !root->left && !root->right) check=1;
            if(root->left != nullptr) hasPathSum(root->left, root->val);
            if(root->right != nullptr) hasPathSum(root->right, root->val);
        }
        if(check==1) return true;
        else return false;
    }
};
