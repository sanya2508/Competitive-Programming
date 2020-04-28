#include<iostream>
using namespace std;
int main()
{int l,b,p,a;
cin>>l;
cin>>b;
a=l*b;
p=2*(l+b);
if(a>p)
{cout<<"Area"<<endl;
cout<<a;
}
else if(a<p)
{cout<<"Peri"<<endl;
cout<<p;
}
else
{cout<<"Eq"<<endl;
cout<<a;
}

return 0;
}
