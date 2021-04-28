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
		map<ll,ll>mp;
		vector<ll>v(n,0);
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		
		for(ll i=0;i<n;i++)
		{
			mp[v[i]]++;
		}
		
		
		ll mn = 0;
		vector<ll>v1;
		for(auto x:mp)
		{
			v1.push_back(x.second);
		}
		sort(v1.begin(),v1.end());
		ll ans = INT_MAX;
		for(ll i=0;i<v1.size();i++)
		{
			ll ans1 = (v1[i] * (v1.size() - i));
			ans = min(ans , (n - ans1)) ;
		}
		
		cout<<abs(ans)<<endl;
		
		
	}
}


