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
//		ll c = 0;
//		for(ll i=0;i<n-1;i++)
//		{
//			ll ans1 = max(v[i],v[i+1]);
//			ll ans2 = min(v[i],v[i+1]);
//			if(ceil(ans1/ans2 <= 2))
//			{
//				c++;
//			}
//		}
		
//		if(c == n-1)
//		{
//			cout<<"0"<<endl;
//		}
//		else
//		{
			ll cnt = 0;
			for(ll i=0;i<n-1;i++)
			{
				ll ans1 = max(v[i],v[i+1]);
				ll ans2 = min(v[i],v[i+1]);
				if((ans1/ans2 > 2))
				{
					while(ans1 > ans2*2)
					{
						ans2 = ans2 * 2;
						cnt++;
					}
				}
			}
			
			cout<<cnt<<endl;
//		}
	}
}


