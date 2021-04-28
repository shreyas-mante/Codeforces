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
//	nuke
//	{
		ll n;
		cin>>n;
		ll arr[n];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		sort(arr,arr+n);
		set<ll>s;
		for(ll i=0;i<n;i++)
		{
			s.insert(arr[i]);
		}
		
		ll sum = 0;
		vector<ll>v;
		for(auto x:s)
		{
			v.push_back(x);
		}
		
		
		for(ll i=0;i<v.size()-1;i++)
		{
			ll ans = arr[i] - arr[i+1];
			sum += ans;
		}
		
		cout<<abs(sum)<<endl;
//	}
}


