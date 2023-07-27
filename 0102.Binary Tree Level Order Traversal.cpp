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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> result;
        TreeNode* front;

        q.push(root);
        if(root==nullptr) return result;
        while(!q.empty()){
            int sz = size(q);
            vector<int> level;
            while(sz--){
                front = q.front();
                q.pop();
                if(front->left != nullptr) q.push(front->left);
                if(front->right != nullptr) q.push(front->right);
                level.push_back(front->val);
            }
            result.push_back(level);
        }
        return result;
    }
};
