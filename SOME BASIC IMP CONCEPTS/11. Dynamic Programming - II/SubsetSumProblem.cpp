// Subset Sum Problem - DP-II


#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll n;
	cin>>n;
	ll val[n];
	for(ll i=0;i<n;i++)
	{
		cin>>val[i];
	}
	
	ll sum;
	cin>>sum;
	
	bool dp[n+1][sum+1];
	
	for(ll i=0;i<=sum;i++)
	{
		dp[0][i] = false;
	}
	
	for(ll i=0;i<=n;i++)
	{
		dp[i][0] = true;
	}
	
	for(ll i=1;i<=n;i++)
	{
		for(ll j=1;j<=sum;j++)
		{
			dp[i][j] = dp[i-1][j];
			
			if(val[i-1] <= j)
			{
				dp[i][j] = dp[i][j] || dp[i-1][j-val[i-1]];
			}
		}
	}
	
	if(dp[n][sum])
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	
}
