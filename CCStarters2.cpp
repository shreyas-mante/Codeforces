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
		
		map<ll,ll>mp;
		
		for(ll i=0;i<n;i++)
		{
			mp[v[i]]++;
		}
		
		if(mp.size() == 1)
		{
			cout<<(v[0]*v[1])+(v[0]-v[0])<<endl;
		}
		else
		{
			ll ans = 0;
			sort(v.begin(),v.end(),greater<ll>());
			ll a = v[0];
			ll b = v[1];
			
			ll c = v[n-1];
			ll d = v[n-2];
			
			ll res = c*d + abs(c-d);
			ans = a*b + abs(v[0]-v[1]);
//			ans = a*b + abs(c-d);
			cout<<max(res,ans)<<endl;
		}
	}
}


