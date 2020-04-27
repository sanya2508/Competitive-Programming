#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define debug(num) cerr << #num << " " << num << endl;
#define F0(itr, limit) for(int itr=0;itr<limit;itr++) 
#define F(itr, init, limit) for(int itr=init;itr<limit;itr++) 
#define Fll(itr,limit) for(long long itr=0;itr<limit;itr++) 
#define coutarr(list_name) F(i, 0, list_name.size()) cout<<list_name[i]<<" "
#define cinarr(list_name) F(i, 0, list_name.size()) cin>>list_name[i]
#define all(list_name) list_name.begin(),list_name.end()
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvll vector<vector<ll>>
#define endl "\n"
using namespace std;

ll countDivisors(int n) 
{ 
    ll cnt = 0; 
    for (ll i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i) 
                cnt++; 
  
            else // Otherwise count both 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 

int main()
{
    IOS;
	int t;
	cin >> t;
	while(t--)
	{
		ll a, b;
		cin >> a >> b;
		ll diff = abs(a - b);
		if(diff == 0)
		{
			cout << -1 << endl;
			continue;
		}
		cout << countDivisors(diff) << endl;
	}
	return 0;
}
