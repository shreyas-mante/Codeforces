#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll dp[10000];
ll isp[10000];
ll arr[10000];

float DFS(ll idx)
{
	if(idx==0)
	{
		return 1;
	}
	else if(dp[idx]!=-1)
	{
		return dp[idx];
	}
	else if(arr[idx]>idx)
	{
		return 0;
	}
	
	float c1 = isp[idx];
	float c2 = DFS(idx-1)*(arr[idx]==idx)*(1-isp[idx]);
	return dp[idx]=c1+c2;

}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		
		
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
	
		for(ll i=0;i,n;i++)
		{
			dp[i] = -1;
		}
		
		
		for(ll i=0;i<n;i++)
		{
			isp[i] = 0;
		}
		
		for(ll i=0;i<m;i++)
		{
			ll x;
			float y;
			cin>>x>>y;
			isp[x] = y;
		}
		
		cout<<DFS(n)<<endl;
	}
}
