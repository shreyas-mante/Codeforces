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
		char arr[n][n];
		
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<n;j++)
			{
				cin>>arr[i][j];
			}
		}
		
		ll cnt = 0;
		
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<n;j++)
			{
				if(arr[i][j] == 'X')
				{
					cnt++;
				}
			}
		}
		
		ll ans = ceil(cnt/3);
		ll c = 0;
		
		cout<<ans<<endl;
		
		
		
		
		
		
		cout<<"ans"<<endl;
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<n;j++)
			{
				cout<<arr[i][j];
			}
			cout<<endl;
		}
	}
}
