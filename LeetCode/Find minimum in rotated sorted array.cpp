class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0, n=nums.size(), high=n-1, mid;
        
        while(low<high)
        {
            mid=low+(high-low)/2;
            if(nums[mid]<=nums[n-1])
                high=mid;
            else low=mid+1;
        }
        if(nums[low]<=nums[n-1]) return nums[low];
        return 0;
    }
};
