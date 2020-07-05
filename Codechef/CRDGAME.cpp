#include<iostream>
#include<string>
using namespace std;
#define ll long long
void fun(){
	string str1,str2;
	int n;
	ll count1, count2, chef = 0, morty = 0; 
	cin>>n;
	for(int i = 0; i < n; i++ ){

		count1 = 0; count2 = 0;
		cin>> str1 >> str2;

		for(int i = 0; i < str1.length(); i++ )
			count1 += str1[i] - '0';
		
		for(int i = 0; i < str2.length(); i++ )
			count2 += str2[i] - '0';

		if( count1 >= count2 ) chef++;
		if( count2 >= count1 ) morty++;
	}

	if( chef > morty )
		cout << "0 " << chef << endl;
	
	else if( chef == morty )
		cout << "2 " << chef << endl;
	
	else 
		cout << "1 " << morty << endl;

}

int main(){
	int t;
	cin>>t;

	while(t--)
		fun();
	
	return 0;
}
