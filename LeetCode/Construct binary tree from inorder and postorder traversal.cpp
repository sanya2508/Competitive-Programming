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
    TreeNode* AddNode(vector<int>& inorder, vector<int>& postorder, int inleft, int inright, int postroot){
    if(inleft > inright) return NULL;
    
    TreeNode* root = new TreeNode(postorder[postroot]);
    
    int inroot = inright;
    while(inorder[inroot] != postorder[postroot]) inroot--;
    
    root->left = AddNode(inorder, postorder, inleft, inroot - 1, postroot - (inright - inroot) - 1);
    root->right = AddNode(inorder, postorder, inroot + 1, inright, postroot - 1 );
    
    return root;
}

TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    return AddNode(inorder, postorder, 0, inorder.size() - 1, postorder.size() - 1);
}
};
