class Solution {
public:
    int arrangeCoins(int n) {
         int current = 1;
        int remaining = n - 1;
        while (remaining >= current + 1) {
            ++current;
            remaining -= current;
        }
        return n == 0 ? 0 : current;
    }
};
