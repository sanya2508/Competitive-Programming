#include <iostream>
using namespace std; 
int main()
{int x;
float y;
cin>>x;
cin>>y;
	if (x<=(y-0.5))
	{
	 if(x%5==0)   
	    cout<<(y-x-0.5);
	
	else
	cout<<y;
	}
	
	else
	cout<<y;
	return 0;
} 
