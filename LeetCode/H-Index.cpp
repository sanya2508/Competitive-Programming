class Solution {
public: 
    int hIndex(vector<int>& citations) {
        sort(citations.rbegin(), citations.rend());
        int ans = 0;
        for(int i = 0; i < citations.size(); i++)
            if(citations[i]>i) ans++;        
        return ans;        
    }
};
