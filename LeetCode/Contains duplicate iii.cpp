class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
	multiset<long> wnd;

	for(int i=0; i<nums.size(); i++){
		auto it = wnd.lower_bound((long)nums[i]-t);
		if(it!=wnd.end() && abs(*it-nums[i])<=t) 
			return true;
		wnd.insert(nums[i]);
		if(i>=k) 
			wnd.erase(wnd.find(nums[i-k]));
	}
	return false;
}
};
