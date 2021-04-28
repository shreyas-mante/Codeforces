#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll arr[n];
		
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		ll dp[n][n];
		memset(dp,0,sizeof(dp));
		for(ll i=0;i<n;i++)
		{
			dp[0][i] = dp[0][i] + (arr[i] + i);
		}
		
		for(ll i=0;i<n;i++)
		{
			dp[i][0] = arr[0] + 1;
		}
		ll sum = 0;
		ll mx =INT_MIN;
		set<ll>s;
		for(ll i=1;i<n;i++)
		{
			for(ll j=1;j<n;j++)
			{
				dp[i][j] = dp[i][j] + (arr[j] + abs(i-j));
				s.insert(dp[i][j]);
			}
		}
		set<ll>::iterator it;
		
		for(it=s.begin(),i=0;it!=s.end(),i<n ;it++,i++)
		{
			cout<<(*it)<<" ";
		}
		cout<<endl;
		
	}
}
