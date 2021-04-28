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
		vector<ll>v1(n),v2(n);
		
		for(ll i=0;i<n;i++)
		{
			cin>>v1[i];
		}
		
		for(ll i=0;i<n;i++)
		{
			cin>>v2[i];
		}
		ll j[4] , r[4];
		for(ll i=0;i<n;i++)
		{
			j[v1[i]-1] = v2[i];
			r[v1[i]-1] = i+1;
		}
		ll ans = 0;
		for(ll i=1;i<n-1;i++)
		{
			if(r[i-1] >= r[i])
			{
				while(r[i-1] >= r[i])
				{
					r[i] = r[i] + j[i];
					ans++;
				}
			}
			else
			{
				continue;
			}
		}
		
		cout<<ans<<endl;
	}
}


