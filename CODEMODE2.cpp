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
		ll l,m;
		cin>>l>>m;
		vector<ll>v1(m),v2(m);
		multimap<ll,ll>mp;
		for(ll i=0;i<m;i++)
		{
			ll a,b;
			cin>>a>>b;
			mp.insert(pair <ll,ll> (a,b));
		}
		ll b = 1;
		for(auto i:mp)
		{
			if(i.first < l)
			{
				l = l + i.second;
			}
			else
			{
				b = 0;
				cout<<"NO"<<endl;
				break;
			}
		}
//		ll b = 1;
//		for(ll i=0;i<m;i++)
//		{
//			if(v1[i] < l)
//			{
//				l = l + v2[i];
//			}
//			else
//			{
//				b = 0;
//				cout<<"NO"<<endl;
//				break;
//			}
//		}
		
		if(b == 1)
		{
			cout<<"YES"<<endl;
		}
		
	}
}


