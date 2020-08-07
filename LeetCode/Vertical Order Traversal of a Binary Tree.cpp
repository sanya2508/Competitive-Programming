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
    void dfs(TreeNode* root,map<int,vector<pair<int,int>>> &umap,int d)
    {
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push(make_pair(root,make_pair(0,0)));
        while(!q.empty())
        {
            auto x=q.front();
            q.pop();
            TreeNode* t=x.first;
            int t1=x.second.second;
            int lvl=x.second.first;
            umap[t1].push_back(make_pair(lvl,t->val));
            if(t->left!=NULL)
            {
                q.push(make_pair(t->left,make_pair(lvl+1,t1-1)));
            }
            if(t->right!=NULL)
            {
                q.push(make_pair(t->right,make_pair(lvl+1,t1+1)));
            }
        }
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        map<int,vector<pair<int,int>>> umap;
        dfs(root,umap,0);
        for(auto i=umap.begin();i!=umap.end();i++)
        {
            vector<pair<int,int>> temp=i->second;
            sort(temp.begin(),temp.end());
            vector<int> t;
            for(int i=0;i<temp.size();i++)
            {
                t.push_back(temp[i].second);
            }
            ans.push_back(t);
        }
        return ans;
    }
};
