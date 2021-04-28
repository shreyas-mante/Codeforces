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
//	nuke
//	{
		string x , y;
		cin>>x>>y;
		ll n = x.size();
		ll m = y.size();
		
		ll dp[n+1][m+1];
		
		for(ll i=0;i<=n;i++)
		{
			dp[i][0] = 0;
		}
		
		for(ll i=0;i<=m;i++)
		{
			dp[0][i] = 0;
		}
		
		for(ll i=1;i<=n;i++)
		{
			for(ll j=1;j<=m;j++)
			{
				if(x[i-1] == y[j-1])
				{
					dp[i][j] = 1 + dp[i-1][j-1];
				}
				else
				{
					dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
				}
			}
		}
		
		cout<<dp[n][m]<<endl;
//	}
}


