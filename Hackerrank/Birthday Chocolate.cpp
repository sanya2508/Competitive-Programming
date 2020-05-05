#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> squares(n);
    for(int squares_i = 0; squares_i < n; squares_i++){
       cin >> squares[squares_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int ans = 0;
    for (int i = 0; i+m-1<n; ++i) 
    {
        int s = 0;
        for (int j = 0; j<m; ++j)
            s += squares[i+j];
        if (s==d)
            ans++;
    }
    cout <<ans<<endl;
    // your code goes here
    return 0;
}
