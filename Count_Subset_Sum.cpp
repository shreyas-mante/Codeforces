#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
ll dp[1002][1002];

ll count_subset_sum(ll arr[] , ll n , ll sum)
{
	if(sum == 0)
	{
		return 1;
	}
	
	if(n == 0)
	{
		return 0;
	}
	
	if(dp[n][sum] != -1)
	{
		return dp[n][sum];
	}
	
	if(arr[n-1] <= sum)
	{
		return dp[n][sum] = count_subset_sum(arr , n-1 , sum - arr[n-1]) + count_subset_sum(arr , n-1 , sum);
	}
	else
	{
		return dp[n][sum] = count_subset_sum(arr , n-1 , sum);
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
		ll arr[n];
		ll sum;
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cin>>sum;
		cout<<count_subset_sum(arr,n,sum)<<endl;
//	}
}


