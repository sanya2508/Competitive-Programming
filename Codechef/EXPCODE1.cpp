#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    sort(a, a+n, greater<int>());
    cout<<a[0]<<endl;
    cout<<a[k-1];

}
