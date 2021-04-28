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
		ll x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		
		ll ans = abs(x1-x2);
		ll ans1 = abs(y1-y2);
		
		if(ans!=0 && ans1!=0)
		{
			cout<<ans+ans1+2<<endl;
		}
		else
		{
			cout<<ans+ans1<<endl;
		}
	}
}

