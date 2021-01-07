class Solution {
public:
    void reverseString(vector<char>& s) {
        helper(s,0,s.size()-1);
    }
    
    void helper(vector<char>&s, int left, int right){
        if(left >= right) return;
        swap(s[left], s[right]);
        left++;
        right--;
        helper(s, left, right);
    }
};
