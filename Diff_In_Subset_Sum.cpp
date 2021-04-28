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
		
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		ll sum = 0;
		for(ll i=0;i<n;i++)
		{
			sum += arr[i];
		}
		
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
				if(arr[i-1] <= j)
				{
					dp[i][j] = dp[i-1][j - arr[i-1]] || dp[i-1][j];
				}
				else
				{
					dp[i][j] = dp[i-1][j];
				}
			}
		}
		
		ll range = sum;
		sum = sum /2 ;
		for(ll i=sum;i>=0;i--)
		{
			if(dp[n][i] == true)
			{
				cout<<(range - (2*i))<<endl;
				break;
			}
		}
//	}
}


