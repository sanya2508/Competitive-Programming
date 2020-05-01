#include <bits/stdc++.h>
using namespace std;

int main() {
	 int n;
	 long long int d;
	cin>>n>>d;
    long long int l[n];
	for(int i=0;i<n;i++)
	{
	    cin>>l[i];
	}
	sort(l,l+n);
	int ans=0;
	int j=0;
	
	while(j<n-1)	{
	    if((l[j+1]-l[j])<=d)
	    {
	        ans++;
	        j = j+2;
	    }
	    else
	    {
	        j++;
	    }
	}
	cout<<ans<<endl;
	return 0;
}
