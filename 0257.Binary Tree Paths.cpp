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
    void dfs(TreeNode* root, vector<string>& result, string tmp){
        if(root==nullptr) return;
        string str = to_string(root->val);
        tmp += str;
        if(root->left==nullptr && root->right==nullptr){
            result.emplace_back(tmp);
            return;
        }
        else tmp+="->";

        if(root->left) dfs(root->left, result, tmp);
        if(root->right) dfs(root->right, result, tmp);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        dfs(root, result, "");
        return result;
    }
};
