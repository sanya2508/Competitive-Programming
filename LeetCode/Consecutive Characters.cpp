class Solution {
public:
    int maxPower(string s) {
        int ans=1, count=1;
        for(int i=1;i<s.size();i++){
            if(s[i-1]==s[i]) count++;
            else{
                if(ans<count) ans=count;
                count=1;
            }
        }
        if(ans>count) return ans;
        else return count;
    }
};
