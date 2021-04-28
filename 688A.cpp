#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		ll arr[n],arr1[m];
		
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		for(ll i=0;i<m;i++)
		{
			cin>>arr1[i];
		}
		
		map<ll,ll>mp;
		map<ll,ll>::iterator it;
		
		for(ll i=0;i<n;i++)
		{
			mp[arr[i]]++;
		}
		
		for(ll i=0;i<m;i++)
		{
			mp[arr1[i]]++;
		}
		ll c = 0;
		for(it=mp.begin();it!=mp.end();it++)
		{
			if(it->second >1)
			{
				c++;
			}
		}
		
		cout<<c<<endl;
		
	}
}
