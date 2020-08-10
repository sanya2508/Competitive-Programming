class Solution {
public:
    int titleToNumber(string s) {
        int sum = 0;
        for(int i = 0; i < s.length(); i++)
        {
            sum += (s[i] - 'A' + 1)* pow(26, s.length() - 1 - i);
        }
        return sum;
    }
};
