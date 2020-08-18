class Solution {
public:
   vector<int> numsSameConsecDiff(int N, int K) {
        unordered_set<int>s;
        for(int i=1;i<=9;i++)s.insert(i);
        for(int i=0;i<N-1;i++){
            unordered_set<int>temp;
            for(auto j:s){
                int d=j%10;
				if(d-K>=0){
                    temp.insert(10*j+(d-K));
                }
                if(d+K<=9)temp.insert(10*j+(d+K));
            }
            s=temp;
        }
        if(N==1)s.insert(0);
        vector<int>ans;
        for(auto i:s){
            ans.push_back(i);            
        }
        return ans;   
    }
};
