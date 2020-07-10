class Solution {
public:
    unordered_map<char,int> ma;
    vector<int> partitionLabels(string s) {
        int n=s.size(),i,start=0,last;
        ma.clear();
        vector<int> ans;
        for(i=0;i<n;i++) ma[s[i]] = i;
        i=0;
        while(start<n){
        last = ma[s[start]];i=start;
        while(i<n&&i<=last)
        {
            last = max(last,ma[s[i++]]);
        }
        ans.push_back(last-start+1);
            start = last+1;
        }
        return ans;
    }
};
