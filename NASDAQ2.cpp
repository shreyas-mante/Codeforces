#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll n;
	cin>>n;
	vector<ll>v(n,0);
	ll num;
	
	for(ll i=0;i<n;i++)
	{
		cin>>num;
		v[i] = num;
	}
	
	ll res = 0;
	sort(v.begin(),v.end(),greater<ll>());
	ll k = 2;
	
	for(ll i=0;i<n/4;i++)
	{
		res = res + v[k];
		k = k + 3;
	}
	
	cout<<res%1000000007<<endl;
	
	
	
	
}
