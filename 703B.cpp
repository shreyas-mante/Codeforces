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
		vector<ll>x,y;
		ll a,b;
		for(ll i=0;i<n;i++)
		{
			cin>>a>>b;
			x.push_back(a);
			y.push_back(b);
		}
		
		sort(x.begin(),x.end());
		sort(y.begin(),y.end());
		
		if((n%2) == 1)
		{
			cout<<"1"<<endl;
		}
		else
		{
			ll m = n/2;
			ll ans1 = x[m] - x[m-1]+1;
			ll ans2 = y[m] - y[m-1] + 1;
			cout<<ans1*ans2<<endl;//abs not use mkc
		}
		
	}
}


