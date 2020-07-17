class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(k == nums.size()) return nums;
        vector<int> result;
        unordered_map<int, int> counts;
        for(int x: nums){
            counts[x] += 1;
        }
        auto cmp = [](pair<int, int>& a, pair<int, int>& b){
            return a.second < b.second;
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> PQ(cmp);
        for(pair x: counts){
            PQ.push(x);
        }
        
        while(k){
            result.push_back(PQ.top().first);
            PQ.pop();
            k--;
        }
        return result;
    }
};
