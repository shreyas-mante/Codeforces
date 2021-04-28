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
	nuke
	{
		ll n;
		cin>>n;
		vector<ll>v(n,0);
		
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		ll c0 , c1 , c2;
		for(ll i=0;i<n;i++)
		{
			if(v[i]%3 == 0)
			{
				c0++;
			}
			else if(v[i]%3 == 1)
			{
				c1++;
			}
			else
			{
				c2++;
			}
		}
		
		ll ans = n/3;
		
		
	}
}


