#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


signed main()
{
	imback;
//	nuke
//	{
		ll n,m;
		cin>>n>>m;
		
		ll arr[n] , arr1[m];
		
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		for(ll i=0;i<m;i++)
		{
			cin>>arr1[i];
		}
		ll ans = 0;
		for(ll i=1;i<m;i++)
		{
			ans = __gcd(abs(arr[0]-arr[i]) , ans);
		}
		
		
		
//	}
}

