#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
ll dp[1002][1002];


ll knapsack(ll wt[] , ll val[] , ll w , ll n)
{
	if(n==0 || w == 0)
	{
		return 0;
	}
	
	if(dp[n][w] != -1)
	{
		return dp[n][w];
	}
	
	if(wt[n-1] <= w)
	{
		return dp[n][w] = max( val[n-1] + knapsack(wt , val , w - wt[n-1] , n-1) , knapsack(wt , val , w , n-1));
	}
	else if(wt[n-1] > w)
	{
		return dp[n][w] = knapsack(wt , val , w , n-1);
	}
}


signed main()
{
	imback;
//	nuke
//	{
		memset(dp , -1 , sizeof(dp));
		ll n;
		cin>>n;
		ll wt[n];
		ll val[n];
		ll w;
		for(ll i=0;i<n;i++)
		{
			cin>>wt[i];	
		}	
		
		for(ll i=0;i<n;i++)
		{
			cin>>val[i];
		}
		
		cin>>w;
		
		ll ans = knapsack(wt , val , w , n);
		
		cout<<ans<<endl;
//	}
}


