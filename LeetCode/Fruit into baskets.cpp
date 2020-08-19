class Solution {
public:
    int totalFruit(vector<int>& tree) {
       unordered_map<int, int> freq; 
    int start = 0, end = 0, now = 0, l = 0; 
    for (int i = 0; i < tree.size(); i++) { 
        freq[tree[i]]++; 
        if (freq[tree[i]] == 1) 
            now++; 
        while (now > 2) { 
            freq[tree[l]]--; 
            if (freq[tree[l]] == 0) 
                now--; 
            l++; 
        } 
        if (i - l + 1 >= end - start + 1) 
            end = i, start = l; 
    } 
        return (end-start+1);
}
};


// reference: https://www.geeksforgeeks.org/longest-subarray-not-k-distinct-elements/
// simialr to longest subarray with k distinct elements
