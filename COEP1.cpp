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
//	nuke
//	{
		ll n;
		cin>>n;
		vector< pair<ll,ll> >v;
		ll b[n];
		for(ll i=0;i<n;i++)
		{
			ll x,y;
			cin>>x>>y>>b[i];
			v.push_back(make_pair(x,y));
		}
		ll ans = 0;
		map<ll,ll>mp,mp1;
		
		for(ll i=0;i<n;i++)
		{
			mp[v[i].first]++;
			mp1[v[i].second]++;
		}
		
		map<ll,ll>::iterator it,it1;
		ans = 0;
		ll i = 0;
		for(it=mp.begin(),it1=mp1.begin();it!=mp.end(),it1!=mp1.end();it++,it1++)
		{
			ans += it.second + it1.second;
			ans = ans*b[i];
			i++;
		}
		cout<<ans<<endl;
		
		
//	}

}


