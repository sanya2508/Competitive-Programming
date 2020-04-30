#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[1000000] = {0};
    int t;
    cin>>t;
    while(t--){
        memset(arr, 0, sizeof arr);
        string name;
        long long int n, rank;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>name>>rank;
            arr[rank]++;
        }

        long long int actual_rank=1;
        long long int sum=0;
        for(int i=1; i<=n; i++){
            while(arr[i]){
                sum+= abs(actual_rank - i);
                arr[i]--;
                actual_rank++;
            }
        }
        cout<<sum<<endl;

    }
}
