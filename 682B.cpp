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
		
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		map<ll,ll>mp;
		
		for(ll i=0;i<n;i++)
		{
			mp[arr[i]]++;
		}
		ll b = 0;
		map<ll,ll>::iterator it;
		for(it=mp.begin();it!=mp.end();it++)
		{
			if(it->second > 1)
			{
				cout<<"YES"<<endl;
				b = 1;
				break;
			}
		}
		
		if(b == 0)
		{
			cout<<"NO"<<endl;
		}
	}
}
