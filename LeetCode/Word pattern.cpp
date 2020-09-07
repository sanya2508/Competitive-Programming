class Solution {
public:
    bool wordPattern(string pattern, string str) {
        map<char,string> mp;
        int pcur = 0, scur = 0;
        string cur = "";
        while(pcur < pattern.size() && scur < str.size()){
            while(scur < str.size() && str[scur] != ' ') cur+=str[scur++];
            if(!mp.count(pattern[pcur])) {
                for(auto iter=mp.begin();iter!=mp.end();++iter)
                    if(iter->second == cur) return false;
                mp[pattern[pcur]] = cur;
            }
            else if(mp[pattern[pcur]] != cur) return false;
            cur = "";
            pcur++;
            scur++;
        }
        return pcur == pattern.size() && scur-1 == str.size();
    }
};
