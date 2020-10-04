#include<bits/stdc++.h>
using namespace std;

int main(){
	int tc;
	cin>>tc;
	while (tc--){
		int n, k, x, y;
		cin>>n>>k>>x>>y;
		int start=x,ans = 0;
		do{
			if(x==y){
				ans=1;
				break;
			}
			else{
				x=(x+k)%n;
			}
		}while(x!=start);
		if(ans==1) {
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}
