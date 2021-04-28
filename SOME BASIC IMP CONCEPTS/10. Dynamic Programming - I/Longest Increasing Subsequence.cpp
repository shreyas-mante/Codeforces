// Longest Increasing Subsequence (LIS) - Dynamic Programming


#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll n;
	cin>>n;
	ll arr[n];
	
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	ll dp[n];
	dp[0] = 1;
	
	for(ll i=1;i<n;i++)
	{
		dp[i] = 1;
		for(ll j=i-1;j>=0;j--)
		{
			if(arr[j] > arr[i])
			{
				continue;
			}
			
			ll possibleans = dp[j]+1;
			if(possibleans > dp[i])
			{
				dp[i] = possibleans;
			}
		}
	}
	
	ll best =0;
	
	for(ll i=0;i<n;i++)
	{
		if(best<dp[i])
		{
			best = dp[i];
		}
	}
	
	cout<<best<<endl;
}
