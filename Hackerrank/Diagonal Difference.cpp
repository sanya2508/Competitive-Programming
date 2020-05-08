#include <bits/stdc++.h>

using namespace std;

int main() {
    int N; 
    cin >> N;    
    int i, j; 
    int diag1 = 0; 
    int diag2 = 0; 
    for(i=0; i<N; i++){
        for(j=0; j<N; j++)
        {
           int no; 
           cin>>no; 
           if(i==j)
               diag1+=no; 
           if(i+j==N-1)
              diag2+=no; 
        }
    }
    
    cout << abs(diag1 - diag2);
    return 0;
}
