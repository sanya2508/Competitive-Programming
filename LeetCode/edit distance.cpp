class Solution {
public:
    int minDistance(string s1, string s2) {
        int temp[s1.length()+1][s2.length()+1];
        for(int i = 0; i<=s1.length(); i++){
            for(int j = 0; j<=s2.length(); j++){
                if(i == 0) temp[i][j] = j; // if the first string is empty then temp[i][j] = length of 2nd string
                else if(j == 0) temp[i][j] = i; // if second string is empty then temp[i][j] = length of 1st string
                else if(s1[i-1] == s2[j-1]) temp[i][j] = temp[i-1][j-1]; // if there is a match then no need to do any edit
                else temp[i][j] = 1+min(temp[i-1][j-1], min(temp[i-1][j], temp[i][j-1])); // if there is mismatch then we can either insert (temp[i][j-1]), replace(temp[i-1][j-1]) or delete (temp[i-1][j])
            }
        }
        return temp[s1.length()][s2.length()];
    }
};
