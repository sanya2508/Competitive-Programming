#include<iostream>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int tc;
    cin>>tc;
    while(tc--)
    {
        long int h,p;
        cin>> h>> p;
        if((h/2) >p)
            cout<<0<<"\n";
        else
            cout<<1<<"\n";
    }
}
