class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        bool flag = true;
        for(int i=1;i<=(int)(s.size()/2);++i){
            if(s.size()%i == 0){
                string prev = s.substr(0,i);
                for(int j=i;j<=s.size()-i;j+=i){
                    if(prev != s.substr(j,i)){
                        flag = false;
                        break;
                    }  
                }
                if(flag) return true;
                else flag = true;
            }
        }
        return false;
    }
};
