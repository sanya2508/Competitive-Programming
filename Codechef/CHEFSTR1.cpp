#include<iostream>
using namespace std;
#define ll long long

void fun(){
	int n,lt,nt;
	cin>>n;
	ll ans = 0;
	cin>>lt;
	for( int i = 1; i < n; i++ ){
		cin>>nt;
		ans += abs(nt - lt) - 1;
		lt = nt;
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)
		fun();
	return 0;
}
