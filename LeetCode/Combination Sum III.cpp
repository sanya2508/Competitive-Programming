class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
    vector<vector<int>>combinations;
    vector<int>temp;
    vector<int>a;
    for(int i = 1 ; i<=9 ; i++){
        a.push_back(i);
    }
    int s = a.size();
    for(int i = 0 ; i < (1 << s) ; i++){
        int c = 0;
        for(int j = 0 ; j < s; j++){
            if(i & (1 << j)){
                temp.push_back(a[j]);
                c+=a[j];
            }
        }
        int p = temp.size();
        if(p == k && c == n){
            combinations.push_back(temp);
        }
        temp.clear();
    }
    return combinations;
}};
