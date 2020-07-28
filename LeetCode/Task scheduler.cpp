class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char,int>mp;
        for(int i = 0; i < tasks.size() ; i++){
            mp[tasks[i]]++;
        }
        priority_queue<int> pq;
        for(auto i = mp.begin() ; i != mp.end() ; i++){
            pq.push(i->second);
        }
        
        int cycles = 0;
        while(!pq.empty()){
            vector<int> temp;
            for(int i = 0 ;i < n+1 ; i++){
                if(!pq.empty()){
                    temp.push_back(pq.top());
                    pq.pop();
                }
            }
            
            for(int i = 0; i < temp.size() ;i++){
                if(--temp[i] > 0)
                    pq.push(temp[i]);
            }
            
            cycles += (pq.empty()) ? temp.size() : n+1;
        }
        return cycles;
    }
};
