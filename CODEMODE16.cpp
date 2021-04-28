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
		ll a,b,k;
		cin>>a>>b>>k;
		ll res = (b * k+k) - 1;
//		ll a1 = (b * k+k*3) - 1;
//		ll b1 = ((a * k+k) - 1)>>2;
//		ll c1 = ((b*a) * k+k) - 1;

		ll res1 = res / (a-1);
//		ll res1 = a1*b1 + (c1);
		if(res%(a-1))
		{
			res1 = res1 + 1;
		}
		
		
		cout<<res+k<<endl;
	}
}


