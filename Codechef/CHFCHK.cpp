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

int main()
{
    IOS;
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vll a(n);
		cinarr(a);
		cout << *min_element(all(a)) << endl;
	}
	return 0;
}
