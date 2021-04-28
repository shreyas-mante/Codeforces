// Minimum Cost Path - Dynamic Programming 


#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll row,col;
	cin>>row>>col;
	ll input[row][col];
	
	for(ll i=0;i<row;i++)
	{
		for(ll j=0;j<col;j++)
		{
			cin>>input[i][j];
		}
	}
	
	ll dp[row][col];
	memset(dp,0,sizeof(dp));
	dp[0][0] = input[0][0];
	
	for(ll i=1;i<row;i++)
	{
		dp[0][i] = dp[0][i] + (dp[0][i-1]+input[0][i]);
	}
	
	for(ll j=1;j<col;j++)
	{
		dp[j][0] = dp[j][0] + (dp[j-1][0]+input[j][0]);
	}
	
	for(ll i=1;i<row;i++)
	{
		for(ll j=1;j<col;j++)
		{
			dp[i][j] = dp[i][j] + (input[i][j] + min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j])));
		}
	}
	
	cout<<dp[row-1][col-1]<<endl;
}
