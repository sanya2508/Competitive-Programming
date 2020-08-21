class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
         string ans;
        int t = 0;
        for(int i = S.size() - 1; i >= 0; --i) {
            if(S[i] == '-') continue;
                        
            if(t != 0 && t % K == 0) {
                ans += '-';
            }
            ++t;
            ans += toupper(S[i]);            
        }   
        return string(ans.rbegin(), ans.rend());
    }
};
