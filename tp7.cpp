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
		ll arr[n];
		
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		ll c = 0;
		for(ll i=0;i<n;i++)
		{
			if(arr[i] <= k)
			{
				c++;
			}
		}
		
		if(c == n)
		{
			cout<<"YES"<<endl;
		}
		else if()
	}
}


