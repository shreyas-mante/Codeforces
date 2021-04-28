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
		
		ll arr[n][k];
		char s[n][k];
		
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<k;j++)
			{
				cin>>s[i][j];
			}
		}
		
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<k;j++)
			{
				arr[i][j] = s[i][j] - '0';
			}
		}
		
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<k;j++)
			{
				
			}
		}
	}
}
