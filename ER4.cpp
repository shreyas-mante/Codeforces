#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n>>x;
		ll arr[n];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		ll c = 0;
		for(ll i=0;i<n-1;i++)
		{
			if(arr[i]<=arr[i+1])
			{
				c++;
			}
		}
		ll d = 0;
		for(ll i=0;i<n;i++)
		{
			if(arr[i] < x)
			{
				d = 1;
			}
		}
		
		if(c==n-1 || n==1)
		{
			cout<<"0"<<endl;
		}
		else if(d==1)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			ll c1 = 0;
			for(ll i=0;i<n-1;i++)
			{
				if(arr[i]<=arr[i+1])
				{
					c1++;
				}
			}
			cout<<c1<<endl;
		}
		
	}
}
