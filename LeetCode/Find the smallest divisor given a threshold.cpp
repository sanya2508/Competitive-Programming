class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1, right = nums.back();
        while (left < right) {
            auto divisor = left + (right - left) / 2, sum = 0;
            for (double x : nums) sum += ceil(x / divisor);
            sum > threshold ? left = divisor + 1 : right = divisor;
        }
        return left;
    }
};
