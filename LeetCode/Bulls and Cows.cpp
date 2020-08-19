class Solution {
public:
    string getHint(string secret, string guess) {
         if(secret.length()==0 || guess.length()==0)
            return ("0A0B");
        int loop1=0;
        unordered_map<char,int>mp;
        for(int i=0;i<secret.length();i++)
        {
            if(secret[i]==guess[i])
            {
                loop1++;
                guess[i]='*';
            }
            else{
                mp[secret[i]]++;
            
            }
        }
        int loop2=0;
        for(int i=0;i<guess.length();i++)
        {
            if(guess[i]!='*' && mp[guess[i]]>=1)
            {
                loop2++;
                mp[guess[i]]--;
            }
        }
        string res="";
        res+=to_string(loop1);
        res+='A';
        res+=to_string(loop2);
        res+='B';
        return res;
    }
};
