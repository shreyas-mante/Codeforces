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
		
		ll ap[n];
		
		ap[0] = arr[0];
		ll sum = 0;
		for(ll i=1;i<n;i++)
		{
			
			ap[i] = ap[i-1] + arr[i];
		}
		
		for(ll i=0;i<n;i++)
		{
			if(ap[i] - (1*(i+1))>=0)
			{
				sum = sum + arr[i];
			}
			else
			{
				break;
			}
		}
		
		cout<<sum<<endl;
		
	}
}
