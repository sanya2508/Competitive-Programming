class Solution {
public:
    void sortColors(vector<int>& nums) {
        int NextZero=0,NextTwo=nums.size()-1,i=0;
        while(i<=NextTwo)
        {
            if(nums[i]==1)
                i++;
            else if(nums[i]==0)
            {
                swap(nums[NextZero],nums[i]);
                NextZero++;
                i++;
            }
            else if (nums[i]==2)
            {
                swap(nums[NextTwo],nums[i]);
                NextTwo--;
            }
        }
        
    }
};
