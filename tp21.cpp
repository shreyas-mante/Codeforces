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
		vector<ll>v(n);
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		for(ll i=0;i<n;i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
		set<ll>s(v.begin(),v.end());
		for(auto x:s)
		{
			cout<<x<<endl;
		}
//	}
}


