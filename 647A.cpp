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
		ll a,b;
		cin>>a>>b;
		ll i = 2;
		ll ans = a | ~(1<<i);
		
		if(ans^1 == 0)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			cout<<ans<<endl;
		}
		
	}
}

