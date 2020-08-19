class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string>ans;
        for(string iter: emails)
        {
            string temp = "";
            int i;
            for(i=0; iter[i]!='@'; i++)
            {
                if(iter[i] =='.')
                    continue;
                else if(iter[i]== '+')
                    break;
                else
                    temp+= iter[i];
            }
            i= iter.find('@');
            temp+= iter.substr(i, iter.length()-i);
            ans.insert(temp);
        }
        return ans.size();
    }
};

// using set
