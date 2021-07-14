// using stl (M-1)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    reverse(arr,arr+n);
    for(int i=0; i<n; i++) cout<<arr[i]" ";
}

//Iterative way (M-2)
#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0; i<n; i++) cout<<arr[n]<<" ";
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    reverse(arr,n);
}

// Recursive way (M-3)
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
    reverse(arr,n,0,n-1);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}
