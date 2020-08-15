class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int ans = 0, r = INT_MIN;                                                         
        sort(intervals.begin(), intervals.end(), [](auto x, auto y){return x[1] < y[1];});
        for(auto x: intervals) x[0] >= r ? r = x[1] : ans++;                              
        return ans;                        
    }
};
