#include <bits/stdc++.h>
using namespace std;
#define ll long long

void fun(){
	int k,n = 7;
	cin>>k;
	k--;

	cout<<'O';
	for( int i = 0; i < 8; i++ ) {
		for(int j = 0; j < n; j++ ){
			if( k > 0 ) cout<<'.';
			else cout<<"X";
			k--;
		}
		n = 8;
		cout<<endl;
	}

}

int main(){
	int t;
	cin>>t;
	while(t--)
		fun();
	return 0;
}
