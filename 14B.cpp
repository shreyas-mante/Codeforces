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
		ll n,k;
		cin>>n>>k;
//		cout<<n%k<<endl;
		
		if(n%2 == 0)
		{
			cout<<((k-1)%n+1)<<endl;
		}
		else
		{
			ll g1 = (n-1)/2 + 1;
			ll ch = k;
			ll res = k;
			while(ch / g1 > 0)
			{
				ll ans1 = ch / g1;
				res = res + ans1;
				ch = ans1 + ch %g1;
			}
			res--;
			cout<<(res% n+1)<<endl;
		}
	}
}


