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
    vector<TreeNode*> buildTree(int start, int n){ // Divide and Conquer
        vector<TreeNode*> ans;
        if(start>n) return {nullptr};
        for(int i=start; i<=n; i++){
            for(auto left: buildTree(start, i-1)){
                for(auto right: buildTree(i+1, n)){
                    ans.push_back(new TreeNode(i, left, right));
                }
            }
        }
        return ans;
    }
    vector<TreeNode*> generateTrees(int n) {
        return buildTree(1, n);
    }
};
