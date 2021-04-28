#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imbackkk ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


signed main()
{
	imbackkk;
	nuke
	{
		ll x,y,z;
		cin>>x>>y>>z;
		
		ll ans1 = x+y;
		ll ans2 = x+z;
		ll ans3 = y+z;
		ll b = 0;
		if(ans1 == z)
		{
			cout<<"YES"<<endl;
			b = 1;
			continue;
		}
		else if(ans2 == y)
		{
			cout<<"YES"<<endl;
			b = 1;
			continue;
		}
		else if(ans3 == x)
		{
			cout<<"YES"<<endl;
			b = 1;
			continue;
		}
		
		
		if(b == 0)
		{
			cout<<"NO"<<endl;
		}
	}
}


