class Solution {
public:
    int myAtoi(string s) {
         stringstream s1(s);
        int x=0;
        s1>>x;
        return x;
    }
};