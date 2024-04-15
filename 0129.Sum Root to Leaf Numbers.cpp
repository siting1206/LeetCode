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
 *//
class Solution {
public:
    int sumNumbers(TreeNode* root, int res=0) {
        if(!root) return 0;
        res = res*10 + root->val;
        if(!root->left && !root->right) return res;
        return sumNumbers(root->left, res) + sumNumbers(root->right, res);
    }
};
