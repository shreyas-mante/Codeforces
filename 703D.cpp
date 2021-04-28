#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



signed main()
{

		ll n,k;
		cin>>n>>k;
		vector<ll>v(n,0);
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		
		sort(v.begin(),v.end(),greater<ll>());
		ll res = 0;
		
		for(ll i=0;i<n-k;i++)
		{
			ll a = floor(k+i+1);
			res = max(res , v[a/2]);
		}
		cout<<abs(res)<<endl;

}


