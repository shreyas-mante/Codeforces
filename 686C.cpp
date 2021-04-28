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
		
		
		vector<ll>v;
		ll a = 0;
		ll i=0;
		for(it=mp.begin();it!=mp.end();it++)
		{
			if(it->second > 0 && i==0)
			{
				
			}
			
		}
		
		
		
		if(mp.size()==1)
		{
			cout<<"0"<<endl;
		}
		else
		{
			sort(v.begin(),v.end());
			cout<<v[0]<<endl;
		}
		
	}
}
