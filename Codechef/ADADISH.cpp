#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--){
    int n;
    cin>>n;
    int a[n];
    int s1=0,s2=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=n-1;i>=0;i--){
        if(s1<=s2){
            s1+=a[i];
         }else{
            s2+=a[i];
         }
      }
      cout<<max(s1,s2)<<endl;
    }
}
