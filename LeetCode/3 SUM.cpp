class Solution{
public:
    vector< vector<int> > threeSum(vector<int> &nums)
    {   
        sort(begin(nums), end(nums));
        vector< vector<int> > res;
        for (size_t i=0; i<nums.size(); i++) {
            if ((i>0) && (nums[i]==nums[i-1]))
                continue; // skip repeated digits to avoid repeated combos
            size_t j = i+1, k = nums.size()-1;
            while (j<k) { // j starts at negative, k at positive
                int s = nums[i]+nums[j]+nums[k];
                if (s>0) k--; // decrease sum by decrementing k
                else if (s<0) j++; // increase sum by incrementing j
                else { // sum is 0, store for output
                    res.push_back(vector<int> {nums[i], nums[j], nums[k]});
                    do {j++;} while (j<k && nums[j-1]==nums[j]); // skip repeated digits
                    do {k--;} while (j<k && nums[k+1]==nums[k]);
                }
            } // loop ends when sum is always positive, k decrements down to j
        }
        return res;
    }
};
