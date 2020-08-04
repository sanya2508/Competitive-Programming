class Solution {
public:
    string removeKdigits(string num, int k) {
         stack<int> st;
        if(num[0]!='0')st.push(num[0] - '0');
        
        for(int i = 1 ; i < num.length() ; i++)
        {
            int x = num[i] - '0';
            while(!st.empty() && k>0 && st.top() > x)
            {
                    st.pop();
                    k--;
            }
            if(x == 0 && st.empty()) continue;
            st.push(x);
        }
        while(!st.empty() && k > 0)
        {
            st.pop();
            k--;
        }
        if(st.empty()) return "0";
        string res = "";
        while(!st.empty())
        {
            res+=st.top() + '0';
            st.pop();
        }
        reverse(res.begin() , res.end());
        return res;
    }
};
