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
    void tree(TreeNode* root, vector<int> &l){
        if(!root) return;
        if(!root->left && !root->right) l.push_back(root->val);
        tree(root->left, l);
        tree(root->right, l);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(!root1 || !root2) return false;
        vector<int> l1, l2;
        tree(root1, l1);
        tree(root2, l2);
        return l1==l2;
    }
};
