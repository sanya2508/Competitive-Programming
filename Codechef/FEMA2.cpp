#include <bits/stdc++.h>
using namespace std;
int main(){
	int tc;
	cin>>tc;
	queue<int>ma;
	queue<int>fe;
	while(tc--){
	    int n,k;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    int p=k+1;
	    int m=0,si=0,sj=0,ans=0;
	    for(int i=0; i<n; i++){
	        if(s[i]=='M') ma.push(i);
	        if(s[i]=='I') fe.push(i);
	        if(s[i]=='X' || i==n-1){
	            int si,sj,sheet=0,q;
	            while(!ma.empty() && !fe.empty()){
	                sheet=0;
	                si=min(ma.front(), fe.front());
	                sj=max(ma.front(), fe.front());
	                for(q=si; q<=sj; q++){
	                    if(s[q]==':')
	                    sheet++;
	                }
	                if((p-abs(si-sj)-sheet)>0){
	                    ans++;
	                    ma.pop();
	                    fe.pop();
	                }
	                else if(ma.front()<fe.front()) ma.pop();
	                else fe.pop();
	            }
	            while(!ma.empty()) ma.pop();
	            while(!fe.empty()) fe.pop();
	        }
	    }
	        cout<<ans<<endl;
	}
	return 0;
}
