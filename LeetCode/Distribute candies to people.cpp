class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
         vector<int> v(num_people,0);
        double d = 1+8.0*candies;
        int num=(sqrt(d)-1)/2;
        int remain=candies-((num*(num+1))/2);
        for(int i=1;i<=num_people;i++) {
            int k=0;
            while(1) {
               if(k*num_people+i<=num)
                    v[i-1]+=(k*num_people+i); 
                else
                    break;
                k++;
            }
        }
        v[num%num_people]+=remain;
        return v;
    }
};
