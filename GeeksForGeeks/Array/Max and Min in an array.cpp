#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n, int start, int end){
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
        reverse(arr,n,start+1,end-1);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    int min=arr[0],max=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<min) min =arr[i];
        if(arr[i]>max) max =arr[i];
    }
    cout<<"min: "<<min<<endl;
    cout<<"max: "<<max<<endl;
}
