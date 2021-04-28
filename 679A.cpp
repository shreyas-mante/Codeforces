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
		
		if(n==2)
		{
			ll m = max(arr[0],arr[1]);
			cout<<"-"<<m<<" "<<"1";
		}
		else
		{
			for(ll i=0;i<n-1;i++)
			{
				cout<<"1"<<" ";
			}
			cout<<"-1";
		}
		
		cout<<endl;
	}
}
