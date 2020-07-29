class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int not_hold = 0, not_hold_cooldown = INT_MIN, hold = INT_MIN;
        for (int p : prices) {
            int temp0 = hold, temp1 = not_hold, temp2 = not_hold_cooldown;
            hold = max(hold, not_hold - p); 
            not_hold = max(not_hold, temp2);  
            not_hold_cooldown = temp0 + p; 
        }
        return max(not_hold, not_hold_cooldown);
    }
};
