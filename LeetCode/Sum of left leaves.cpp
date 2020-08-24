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
    vector<int> v;
    
    void check(TreeNode* root){
        if(root == NULL){
            return ;
        }
        
        if(root->left){
            if(root->left->left == NULL && root->left->right == NULL){
                v.push_back(root->left->val);
            }
            check(root->left);
        }
        
        if(root->right)
        {
            check(root->right);
        }
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        check(root);
        int sum = 0;
        for(int r : v) sum += r;
        return sum;
    }
};
