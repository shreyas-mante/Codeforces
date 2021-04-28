// Edit Distance Problem - DP-II 


#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	string s1,s2;
	cin>>s1;
	cin>>s2;
	
	ll m = s1.length();
	ll n = s2.length();
	
	ll dp[m+1][n+1];
	
	for(ll i=0;i<=m;i++)
	{
		dp[i][0] = i;
	}
	
	for(ll i=0;i<=n;i++)
	{
		dp[0][i] = i;
	}
	
	for(ll i=1;i<=m;i++)
	{
		for(ll j=1;j<=n;j++)
		{
			if(s1[m-i] == s2[n-j])
			{
				dp[i][j] = dp[i-1][j-1];
			}
			else
			{
				dp[i][j] = min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1])) + 1;
			}
		}
	}
	
	cout<<dp[m][n]<<endl;
}
