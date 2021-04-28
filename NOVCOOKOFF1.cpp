#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	
	
	ll t = n;
	ll c = 0;
	while(t--)
	{
		ll arr[n+1];
		
		for(ll i=0;i<=n;i++)
		{
			cin>>arr[i];
		}
		ll sum = 0;
		for(ll i=0;i<n;i++)
		{
			sum = sum + arr[i];
		}
		
		if(sum>=m && arr[n]<=10)
		{
			c++;
		}
	}
	
	cout<<c<<endl;
}
