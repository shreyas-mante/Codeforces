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
		ll n , k;
		cin>>n>>k;
		
		ll ans = k - (n - k);
//		cout<<ans<<endl;
		
		for(ll i=1;i<ans;i++)
		{
			cout<<i<<" ";
		}
		
//		ll ans1 = abs(k - ans);
		for(ll i=k;i>=ans;i--)
		{
			cout<<i<<" ";
		}
		
		cout<<endl;
	}
	
}


