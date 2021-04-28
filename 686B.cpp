#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll arr[n];
		map<ll,ll>mp;
		map<ll,ll>::iterator it;
		
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		for(ll i=0;i<n;i++)
		{
			mp[arr[i]]++;
		}
		
		ll ans = 0;
		ll c = 0;
		for(it=mp.begin();it!=mp.end();it++)
		{
			if(it->second==1)
			{
				ans = it->first;
				break;
			}
			else
			{
				c++;
			}
		}
		
		if(c==mp.size())
		{
			cout<<"-1"<<endl;
		}
		else
		{
			for(ll i=0;i<n;i++)
			{
				if(ans == arr[i])
				{
					cout<<i+1<<endl;
				}
			}
			
		}
		
	}
}
