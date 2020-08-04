class Solution {
public:
    string removeKdigits(string a, int k) {
         if(a.size()==k)
            return "0";
        stack<char> s;
        int i=0;
        while(i<a.size())
        {
            
            while(k>0 && !s.empty() && s.top()>a[i])
            {
                s.pop();
                k--;        
            }
            s.push(a[i++]);
        }
        while(k--)
        {
            s.pop();
        }
        string ans="";
        while(!s.empty())
        {
            ans=s.top()+ans;
            s.pop();
        }
        while(ans.size() > 1 && ans[0] == '0'){
            ans = ans.substr(1);
        }
        return ans;
    }
};
