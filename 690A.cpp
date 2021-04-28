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
		
		for(ll i=0;i<n/2;i++)
		{
			cout<<arr[i]<<" "<<arr[n-1-i]<<" ";			
		}
		
		if(n%2!=0)
		{
			cout<<arr[n/2];
		}
			
		cout<<endl;
		
	}
}
