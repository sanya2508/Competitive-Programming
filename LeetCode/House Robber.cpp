class Solution {
public:
int rob(vector<int>& nums) {
    if(nums.size()==0) return 0;    
    int cur=nums[0],prev=0;
    for(int i=1; i<nums.size(); i++)
    {
        int temp=cur;
        cur=max(cur,prev+nums[i]);
        prev=temp; 
    }
    return max(cur,prev);
}
};
