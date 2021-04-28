#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		char arr[n][m];
		
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<m;j++)
			{
				cin>>arr[i][j];
			}
		}
		ll cnt = 0;
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<m;j++)
			{
				if(arr[i][j] == '*')
				{
					cnt++;
				}
			}
		}
		
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<m;j++)
			{
				if(arr[i][j]=='*' && arr[i+1][j]=='*' && arr[i+1][j-1]=='*' && arr[i+1][j+1]=='*')
				{
					cnt++;
				}
			}
		}
		
		cout<<cnt<<endl;
		
	}
}
