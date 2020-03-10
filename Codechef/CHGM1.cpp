#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int m =0;
	    int mn =0;
	    for(int i=0;i<n;i++)
	    {
	        mn +=arr[i];
	        if(mn<0)
	        {
	            mn=0;
	        }
	        if(m<mn)
	        {
	            m = mn;
	        }
	    }
	    cout<<m<<endl;
	}
}
