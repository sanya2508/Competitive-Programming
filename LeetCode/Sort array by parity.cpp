class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int p=0,temp=0;
        for(int i=0;i<A.size();i++){
            if(A[i]%2==0){ 
                temp=A[i];
                A[i]=A[p];
                A[p]=temp;
                p++;
            }
        }
        return A;
    }
};
