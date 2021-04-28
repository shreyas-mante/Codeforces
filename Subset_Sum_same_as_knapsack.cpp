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
		ll n;
		cin>>n;
		ll arr[n];
		ll sum;
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
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
				if(arr[i - 1] <= j )
				{
					dp[i][j] = dp[i-1][j - arr[i-1]] || dp[n-1][j];	
				}
				else
				{
					dp[i][j] = dp[i-1][j];
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
//	}
}


