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
    vector<int> tmp;
    void inorder(TreeNode* root){
        if(!root) return;
        else{
            inorder(root->left);
            tmp.push_back(root->val);
            inorder(root->right);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root);
        return tmp[k-1];
    }
};
