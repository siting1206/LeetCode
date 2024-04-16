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
    void add(TreeNode* node, int val, int depth, int cur_depth){
        if(node==NULL) return;
        if(cur_depth==(depth-1)){
            node->left = new TreeNode(val, node->left, NULL);
            node->right = new TreeNode(val, NULL, node->right);
            return;
        }

        add(node->left, val, depth, cur_depth+1);
        add(node->right, val, depth, cur_depth+1);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1) return new TreeNode(val, root, NULL);

        add(root, val, depth, 1);
        return root;
    }
};
