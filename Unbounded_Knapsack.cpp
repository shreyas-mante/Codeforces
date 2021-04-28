#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
ll dp[1002][1002];


ll unbounded_knapsack(ll val[] , ll wt[] , ll n , ll w)
{
	if(n == 0 || w == 0)
	{
		return 0;
	}
	
	if(dp[n][w] != -1)
	{
		return dp[n][w];
	}
	
	if(wt[n-1] <= w)
	{
		return dp[n][w] = max(val[n-1] + unbounded_knapsack(val , wt , n , w-wt[n-1]) , unbounded_knapsack(val , wt , n-1 , w) );
	}
	else
	{
		return dp[n][w] = unbounded_knapsack(val , wt , n-1 , w);
	}
}

signed main()
{
	imback;
//	nuke
//	{
		ll n;
		cin>>n;
		ll w;
		cin>>w;
		ll val[n];
		ll wt[n];
		memset(dp , -1 , sizeof(dp));
		for(ll i=0;i<n;i++)
		{
			cin>>val[i];
		}
		
		for(ll i=0;i<n;i++)
		{
			cin>>wt[i];
		}
		
		cout<<unbounded_knapsack(val , wt , n , w)<<endl;
//	}
}


