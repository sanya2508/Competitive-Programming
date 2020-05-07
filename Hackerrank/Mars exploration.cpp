#include <bits/stdc++.h>

using namespace std;
int main(){
    string S;
    cin >> S;
    long cnt = 0;
    for (int i = 0; i < S.size() / 3; i++) {
        if (S[3*i+0] != 'S') cnt++;
        if (S[3*i+1] != 'O') cnt++;
        if (S[3*i+2] != 'S') cnt++;
    }
    cout << cnt << endl;
}
