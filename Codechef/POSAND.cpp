#include <bits/stdc++.h>
using namespace std;

string str[] = {
            "-1",
            "1",
            "-1",
            "1 3 2",
            "-1",
            "4 5 1 3 2",
            "6 4 5 1 3 2",
            "7 6 4 5 1 3 2",
            "-1",
            "8 9 7 6 4 5 1 3 2",
        };

bool isPowerOf2(int n){
    if(n&1) return false;
    if(n==2) return true;
    n/=2;
    return isPowerOf2(n);
}
void result(int n){
    int i=n,current=n;
    while(i>9){
        int next = current-1;
        if(isPowerOf2(next)){
            cout<<next<<' ';
            cout<<current<<' ';
            current-=2;
            i-=2;
        }
        else{
            cout<<current<<' ';
            current--;
            i--;
        }
    }
    cout<<str[9]<<endl;
}

int main() {
	int tc;
	cin>>tc;
	while(tc--){
	    int n;
        cin>>n;
        if(isPowerOf2(n)) cout<<"-1\n";
        else if(n<=9){
            cout<<str[n]<<endl;
        }
        else{
            result(n);
        }
	}
	return 0;
}
