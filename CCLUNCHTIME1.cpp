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
		ll k;
		cin>>n>>k;
		ll arr[n];
		
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		ll sum = 0;
		
		for(ll i=0;i<n;i++)
		{
			sum+=arr[i];
		}
		
		if(sum %k == 0)
		{
			cout<<"0"<<endl;
		}
		else
		{
			cout<<"1"<<endl;
		}
	}
}

