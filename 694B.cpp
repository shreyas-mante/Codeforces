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
		ll n,x;
		cin>>n>>x;
		vector<ll>v(n,0);
		
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		
		ll ans = 0;
		ll i =0;
		for(ll i=0;i<n;i++)
		{
			if(v[i] % x == 0)
			{
				fill_n(back_inserter(v), x, v[i]/x);
				ans += v[i];
				v.erase(v.begin());	
			}
			else
			{
				break;
			}
		}
//		ll ans = 0;
		for(ll i=0;i<v.size();i++)
		{
			ans += v[i];
		}
		cout<<ans<<endl;
	}
}

