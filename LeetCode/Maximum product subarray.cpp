class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int mx=nums[0],mn=nums[0],sol=nums[0],x,y;
        for(int i=1;i<nums.size();i++)
        {
           x=nums[i]*mx;
            y=nums[i]*mn;
            mx=max(nums[i],max(x,y));
            mn=min(nums[i],min(x,y));
            sol=max(sol,max(mx,mn));
        }
        return sol;
    }
};
