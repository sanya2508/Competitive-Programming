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
    int sumRootToLeaf(TreeNode* root) {
        int total{0};
        if(root) dfs(root, total);
        return total;
    }
    static void dfs(TreeNode* root, int& total, int cur = 0) {
        cur = (cur<<1) + root->val;
        if(!root->left && !root->right) total += cur;
        if(root->left) dfs(root->left, total, cur);
        if(root->right) dfs(root->right, total, cur);
        
    }
};
