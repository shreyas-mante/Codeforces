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
		map<string , ll>mp;
		for(ll i=0;i<n;i++)
		{
			string s;
			cin>>s;
			mp[s]++;
		}
		
		ll ans = 0;
		for(auto x:mp)
		{
			ans = max(ans , x.second);
		}
		
		for(auto X:mp)
		{
			if(ans == X.second)
			{
				cout<<X.first<<endl;
			}
		}
//	}
}


