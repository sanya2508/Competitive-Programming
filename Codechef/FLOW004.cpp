#include <iostream>
using namespace std;

int main() {
    int t;
	cin>>t;
	int a;
	int r;
	int r1;
	while(t--)
	{
	    cin>>a;
	    r1=a%10;
	    while(a!=0)
	    {
	       r=a%10;
	       a=a/10;
	    }
	    cout<<r+r1<<endl;
	}
	return 0;
}
