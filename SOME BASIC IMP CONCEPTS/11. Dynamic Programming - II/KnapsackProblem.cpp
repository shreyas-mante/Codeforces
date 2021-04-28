// Knapsack Problem - DP-II 


#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll n , w;
	cin>>n>>w;
	ll p[n] , wt[n];
	
	for(ll i=0;i<n;i++)
	{
		cin>>p[i];
	}
	
	for(ll i=0;i<n;i++)
	{
		cin>>wt[i];
	}
	
	ll dp[n+1][w+1];
	
	for(ll i=0;i<=n;i++)
	{
		for(ll j=0;j<=w;j++)
		{
			if(i==0 || j==0)
			{
				dp[i][j] = 0;
			}
			else if(wt[i-1] <= w)
			{
				dp[i][j] = max(dp[i-1][j] , dp[i-1][j- wt[i-1]] + p[i-1]);
			}
			else
			{
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	
	cout<<dp[n][w]<<endl;
}
