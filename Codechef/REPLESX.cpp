#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--){
        ll N,X,p,k;
        cin>>N>>X>>p>>k;
        if (N==0 || N==1){
            cout<<-1<<endl;
            continue;
        }
        vector<int> input(N);
        for (int i=0; i<N; ++i)
            cin >> input[i];
        sort(input.begin(), input.end());
        ll cnt=0;
        while (input[p-1]!=X && cnt <N){
            cnt++;
            input[k-1]=X;
            sort(input.begin(), input.end());
        }
        if(cnt==N){
            cout<<-1<<endl;
            continue;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
