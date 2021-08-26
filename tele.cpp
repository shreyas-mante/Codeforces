#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	ll nb , tok;
	sort(arr,arr+n,greater<ll>());
	if(n == 2)
	{
		nb = arr[0];
		tok = arr[1];
		if(nb > tok)
		{
			cout<<"1"<<endl;
		}
		else if(tok > nb)
		{
			cout<<"0"<<endl;
		}
		else
		{
			cout<<"-1"<<endl;
		}
	}
	else
	{
		nb  = arr[0];
		tok = arr[1];
		for(ll i=2;i<n;i++)
		{
			if(i%2 == 0)
			{
				nb = nb ^ arr[i];
			}
			else
			{
				tok = tok ^ arr[i];
			}
		}
		
		if(nb > tok)
		{
			cout<<"1"<<endl;
		}
		else if(tok > nb)
		{
			cout<<"0"<<endl;
		}
		else
		{
			cout<<"-1"<<endl;
		}
	}
	
}
