#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		string s = "abc";
		
		for(ll i=0;i<n;i++)
		{
			cout<<s[i%3];
		}
		cout<<endl;
	}
}
