#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
ll dp[1002][1002];

ll LCS(string x , string y , ll n , ll m)
{
	if(n == 0 || m == 0)
	{
		return 0;
	}
	
	if(dp[n][m] != -1)
	{
		return dp[n][m];
	}
	
	if(x[n-1] == y[m-1])
	{
		return dp[n][m] = 1 + LCS(x , y , n-1 , m-1);
	}
	else
	{
		return dp[n][m] = max(LCS(x , y , n-1 , m) , LCS(x , y , n , m-1));
	}
	
}

signed main()
{
	imback;
//	nuke
//	{
		string x , y;
		cin>>x>>y;
		ll n = x.size();
		ll m = y.size();
		memset(dp , -1 , sizeof(dp));
		cout<<LCS(x , y , n , m)<<endl;
//	}
}


