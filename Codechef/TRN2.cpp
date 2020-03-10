#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {int n;
    cin>>n;
    int t[n];
    for(int i=0; i<(n-1); i++){
        cin>>t[i];
    }
    int d[n-2];
    for(int j=0; j< (n-2); j++){
        cin>> d[j];
    }
    int qin;
    cin>>qin;
    while(qin--){
        int o,s,e;
        cin>>o>>s>>e;
        if(s>e){
            swap(s,e);
        }
        if(s==e)
	 	{
	 	cout<<"0"<<endl;
	 	continue;
	 	}
	 	
        if(o==0){
        int sum=0;
        for(int i=s; i<e; i++){
            sum = sum + t[i-1];
            if(i<(e-1))
            sum=sum+d[i-1];
        }
        cout <<sum<<endl;
        }
        
        else{
          int sum=0;
        for(int i=s; i<e; i++){
            sum = sum + t[i-1];
        }
        sum= sum + (e-s-1)*d[s-1];
        cout<<sum<<endl;
        }
    }
    }
}
