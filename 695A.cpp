#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


signed main()
{
	imback;
	nuke
	{
		ll n;
		cin>>n;
		vector<ll>v(n,0);
		
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		
		ll hcnt = 0;
		for(ll i=1;i<n-1;i++)
		{
			if(v[i] > v[i-1] && v[i] > v[i+1])
			{
				hcnt++;
			}
		}
		
		ll vcnt = 0;
		for(ll i=1;i<n-1;i++)
		{
			if(v[i] < v[i-1] && v[i] < v[i+1])
			{
				vcnt++;
			}
		}
		ll ans = vcnt + hcnt;
		
	}
}

