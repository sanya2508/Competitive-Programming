class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> timestamp(1001,0); // creating a vector which is size of 1001 ,each index is sec here and it holds how many passengers are there in car .
        for(auto i:trips){ // traversing trips array
            timestamp[i[1]]+=i[0]; // 1st index indicates number of passengers entering into  car
            timestamp[i[2]]-=i[0]; //2nd index indicates number of passengers stepping down from the car
			// 0th index indicates number of passengers
        }
        int c=0; // holds total number of passangers at each sec
        for(auto i:timestamp){ // traversing timestamp array
            c=c+i; // calculating number of passangers at each sec
            if(c>capacity) return false; // it it is true returns false
        }
        return true;
    }
};