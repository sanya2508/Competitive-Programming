class Solution {
 int dp[366] = {0};
    int one,seven,thirty;
public:  
    int visit (bool* days,int start) {
        while (start<=365 && !days[start]) start++;
        if (start>=366) return 0;
        if (dp[start]) return dp[start];
        dp[start] = visit(days,start+1)+one;
        dp[start] = min(dp[start],visit(days,start+7)+seven);
        dp[start] = min(dp[start],visit(days,start+30)+thirty);
        return dp[start];
    }
    
    int mincostTickets(vector<int>& d, vector<int>& costs) {
        one = costs[0];
        seven = costs[1];
        thirty = costs[2];
        bool days[366] {false};
        for (int day:d) days[day] = true;
        return visit(days,1);
    }
};
