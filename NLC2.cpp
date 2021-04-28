#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool pLogic(ll n)
{
	
	for(ll i=2;i*i<=n;i++)
	{
		if(n%i == 0)
		{
			return false;
		}
	}
	
	return true;
}

int main()
{
	
	vector<ll> v;
	for(ll i=2;i<100001;i++)
	{
		if(pLogic(i))
		{
			v.push_back(i);
		}
	}
	
	
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
		vector<ll>final(n);
		
		for(ll i=0;i<n;i++)
		{
			final[i] = v[i];
		}
		for(ll i=0;i<n;i++)
		{
			if(arr[i]-1!=i)
			{
				final[i] = v[arr[i]-1];	
			}
		}
		
		for(ll i=0;i<final.size();i++)
		{
			cout<<final[i]<<" ";
		}
		
		cout<<endl;
	}
}
