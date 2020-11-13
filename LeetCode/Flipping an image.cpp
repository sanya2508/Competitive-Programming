class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i=0; i<A.size(); ++i)
        {
            int l=0, r=A[i].size()-1;
            while(l<=r){
                int temp = A[i][l];
                A[i][l++]= !A[i][r];
                A[i][r--] = !temp;
            }            
        }
        return A;
    }
};
