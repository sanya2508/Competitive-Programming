class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        string s;
        for(int i=0;i<=3;i++)
            s+=to_string(A[i]);
        bool var=true;
        int res=-1,temp;
        string s1;
        sort(s.begin(),s.end());
        while(var==true)
        {
            if(((s[0]=='2'&&s[1]<='3')||(s[0]=='1')||(s[0]=='0'))&&s[2]<='5'&&s[3]<='9')
            {
                temp=(s[0]-'0')*1000+(s[1]-'0')*100+(s[2]-'0')*10+(s[3]-'0');
                if(temp>=res)
                {
                    s1="";
                    res=temp;
                    s1+=s[0];
                    s1+=s[1];
                    s1+=":";
                    s1+=s[2];
                    s1+=s[3];
                }
                
            }
            var=next_permutation(s.begin(),s.end());
        }
        return s1;
    }
};
