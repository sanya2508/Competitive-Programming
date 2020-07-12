class Solution {
public:
    unordered_map<string,vector<pair<string,double>>>mp;
    
    double bfs(string src, string des){
        
        if(mp.find(src) == mp.end() || mp.find(des) == mp.end())
            return -1.0;
        
        unordered_set<string>visited;
        queue<pair<string,double>>q;
        
        q.push({src,1.0});
        
        visited.insert(src);
        
        while(!q.empty()){
            
            string node = q.front().first;
            double val = q.front().second;
            q.pop();
            
            if(node == des)
                return val;
            
            for(auto child : mp[node]){
                if(!visited.count(child.first)){
                    visited.insert(child.first);
                    q.push({child.first,child.second*val});
                }
            }
        }
        
        
        return -1.0;
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        
        for(int i = 0; i < equations.size(); i++){
            mp[equations[i][0]].push_back({equations[i][1],values[i]});
            mp[equations[i][1]].push_back({equations[i][0],1/values[i]});
        }
        
        vector<double> ans;
        for(int i = 0; i < queries.size(); i++){
            ans.push_back(bfs(queries[i][0],queries[i][1]));
        }
        return ans;
    }
};
