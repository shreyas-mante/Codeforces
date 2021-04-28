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
		ll arr1[n];
		ll arr2[n];
		
		for(ll i=0;i<n;i++)
		{
			cin>>arr1[i];
		}
		
		for(ll i=0;i<n;i++)
		{
			cin>>arr2[i];
		}
		
//		sort(arr1,arr1+n);
//		sort(arr2,arr2+n);
		
		ll ans = 0;
		for(ll i=0;i<n;i++)
		{
			ll x = arr1[i];
			for(ll j=0;j<n;j++)
			{
				ll res = abs(x - arr2[i]);
				ans = min(ans , res);
			}
		}
		
		cout<<ans<<endl;
	}
}


