#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long int tc;
	cin>>tc;
	while(tc--)
	{
	    long int Pc,Pr;
	    cin>>Pc>>Pr;
	    long int cntc=0,cntr=0;
	    if(Pc%9!=0)
	    {
	        cntc=Pc/9+1;
	    }
	    else
	    {
	        cntc=Pc/9;
	    }
	    if(Pr%9!=0)
	    {
	        cntr=Pr/9+1;
	    }
	    else
	    {
	        cntr=Pr/9;
	    }
	    if(cntc<cntr)
	    {
	        cout<<0<<" "<<cntc<<endl;
	    }
	    else
	    {
	        cout<<1<<" "<<cntr<<endl;
	    }
	}
	return 0;
}
