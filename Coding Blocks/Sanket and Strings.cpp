#include <iostream>
#include<cstring>
using namespace std;
int main() {
    string s;
   long long i,j,k,ans=0,value;
   cin>>k;
   cin>>s;
   long long n=s.length();
      for(i=0;i<n;i++)
   {  
      char ch=s[i];
      int j=i+1;
      int count[]={0,0};
      count[ch - 'a']++;
      while(j<n)
      {
         
           
             if(min(count[0],count[1])<=k)
             {count[s[j] - 'a']++;
              j++;
             }
             else
             { 
               value=j-i;
               break;
             }
         
      }
        if(j!=n)
         value=j-i-1;
        else
            value = j-i;
      ans=max(ans,value);
   }
   cout<<ans;
   return 0;
}
