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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        queue<TreeNode*> q;
        TreeNode* front;

        q.push(root);
        if(root == nullptr) return result;
        int level_sz = 0;
        while(!q.empty()){
            level_sz++;
            int sz = size(q);
            vector<int> level;
            while(sz--){
                front = q.front();
                q.pop();
                if(front->left!=nullptr) q.push(front->left);
                if(front->right!=nullptr) q.push(front->right);
                level.push_back(front->val);
            }
            if(level_sz%2==0) reverse(level.begin(), level.end());
            result.push_back(level);
        }
        return result;
    }
};
