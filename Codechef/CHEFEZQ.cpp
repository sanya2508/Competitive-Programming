#include<bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while (tc--) {
		long n, k;
		cin>>n>>k;
		long q[n];
		long j=0, day=1;
		for (long i=0; i<n; i++) {
			cin >> q[i];
		}
		while (q[j]>=k) {
		    if (j==n-1){
				day+= q[j]/k;
				break; 
			}
			else {
				q[j]-=k;
				j++;
				q[j] += q[j-1];
				day++;
			}
		}
		cout<<day<<endl;
	}
	return 0;
}
