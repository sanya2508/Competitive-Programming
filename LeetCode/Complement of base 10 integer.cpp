class Solution {
public:
    int bitwiseComplement(int N) {
        if(N==0) return 1;
        int y=0;
        int p=0;
        while(N){
            int res = !(N&1);
            N = N>>1;
            y += res*pow(2,p);
            p+=1;
        }    
        return y;
    }
};
