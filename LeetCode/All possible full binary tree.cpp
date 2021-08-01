class Solution {
public:
    vector<TreeNode*> allPossibleFBT(int n) {
	
        if(n&1 == 0)return {}; //FBT can have only odd number of nodes
        if(n == 1)return {new TreeNode()};
		
        vector<TreeNode*>res;
		
        for(int i = 1; i < n-1;i+=2){  //incrementation by 2 to avoid redundant recursive call for even number of nodes
		
            vector<TreeNode*>left = allPossibleFBT(i);
            vector<TreeNode*>right = allPossibleFBT(n-i-1);  //1 is reserved for root node, hence n-i-1
			
            for(auto l : left)
                for(auto r : right)
                    TreeNode* root = new TreeNode(), root->left = l, root->right = r, res.push_back(root);
        }
		
        return res;
        
    } 
};
