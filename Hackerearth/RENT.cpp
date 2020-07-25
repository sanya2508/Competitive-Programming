#include <bits/stdc++.h> 
using namespace std; 
unsigned long long int findMaxSubarraySum(unsigned long long int arr[],unsigned long long int n,unsigned long long int sum) 
{ 
	unsigned long long int curr_sum = arr[0], max_sum = 0, start = 0; 
	for (unsigned long long int i = 1; i < n; i++) { 
		if (curr_sum <= sum) 
		max_sum = max(max_sum, curr_sum); 
		while (curr_sum + arr[i] > sum && start < i) { 
			curr_sum -= arr[start]; 
			start++; 
		} 
		curr_sum += arr[i]; 
	} 
	if (curr_sum <= sum) 
		max_sum = max(max_sum, curr_sum); 
	return max_sum; 
} 
int main() 
{ 
   unsigned long long int n;
    cin>>n;
    unsigned long long int x;
    cin>>x;
    long long int y;
    cin>>y;
    unsigned long long int max=0;
    unsigned long long int sum;
    unsigned long long int array[n];
    unsigned long long int arr[n];
	 for(unsigned long long int i=0; i<n; i++){
         cin>> array[i];
     }
      while(y--){
          max = max+ findMaxSubarraySum(array, n, x);  
         x= 2*x;
         for (unsigned long long int k=0; k<n; k++){
        arr[k] = 2*array[k];
        array[k] = arr[k];     
    }
 }
    cout<<max;

	return 0; 
} 
