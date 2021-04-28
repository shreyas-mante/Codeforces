#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


signed main()
{
	imback;
	nuke
	{
		ll n;
		cin>>n;
		ll arr[n];
		ll length[n];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];		// value array
		}
		for(ll i=0;i<n;i++)
		{
			length[i] = i + 1;	// weigth array
		}
		
		ll dp[n+1][n+1];
		
		for(ll i=0;i<=n;i++)
		{
			dp[i][0] = 0;
		}
		
		for(ll i=0;i<=n;i++)
		{
			dp[0][i] = 0;
		}
		
		for(ll i=1;i<=n;i++)
		{
			for(ll j=1;j<=n;j++)
			{
				if(length[i-1] <= j)
				{
					dp[i][j] = max(arr[i-1] + dp[i][j - length[i-1]] , dp[i-1][j]);
				}
				else
				{
					dp[i][j] = dp[i-1][j];
				}
			}
		}
		
		cout<<dp[n][n]<<endl;
		
	}
}


