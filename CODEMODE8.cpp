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
		ll s1,t1,c1;
		cin>>s1>>t1>>c1;
		set< pair<ll,ll> >s;
		
		while(c1--)
		{
			ll h , r;
			cin>>h>>r;
			pair<ll,ll> pr = make_pair(h,r);
			s.insert(pr);
		}
		
		ll c = 0;
		for(auto i:s)
		{
			ll pf1 = i.first;
			ll o = i.second;
			
			for(auto j:s)
			{
				if(j.first != pf1 && j.second != o)
				{
					c++;
				}
			}
		}
		cout<<abs(c/2)<<endl;
		
//	}
}


