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
     TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return NULL;
        TreeNode* parent, *node;
        pair<TreeNode*, TreeNode*> nodes = findNode(root, key, parent);
        parent = nodes.second;
        node = nodes.first;
        if(!node) return root;
        
        TreeNode* t;
        if(node->left){
            t = node->left;
            if(node->right){
                TreeNode* temp = node->right;
                while(temp->left){
                    temp = temp->left;
                }
                temp->left = t->right;
                t->right = node->right;
            }
        }else{
            t = node->right;
        }
        if(!parent) root = t;
        else if(parent->left == node) parent->left = t;
        else parent->right = t;
        delete node;
        return root;
    }
    
    pair<TreeNode*, TreeNode*> findNode(TreeNode* root, int key, TreeNode* parent){
        if(!root) return {NULL,NULL};
        if(root->val == key) return {root,parent};
        parent = root;
        if(root->val < key) return findNode(root->right, key, parent);
        return findNode(root->left, key, parent);
    }
};
