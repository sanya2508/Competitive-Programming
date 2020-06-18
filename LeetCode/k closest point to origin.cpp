class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) 
    {
        priority_queue<pair<int, int>> q; // [dist, indx]
        for(int i = 0; i < points.size(); ++i)
        {
            auto& p = points[i];
            q.push({abs(p[0]*p[0])+abs(p[1]*p[1]), i});
            if(q.size() > K) q.pop();
        }
        vector<vector<int>> res(q.size());
        for(int i = 0; q.size(); ++i)
        {
            auto& [dist, indx] = q.top();
            res[i] = points[indx];
            q.pop();
        }
        return res;
    }
};
