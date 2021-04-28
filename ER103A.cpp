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
		vector<ll>v;
		if(n > k)
		{
			ll rr = (n+k-1) / k;
			k  = k* rr;
			rr = (k+n-1)/n;
			v.push_back(rr);
		}
		else
		{
			ll rr = (k+n-1)/n;
			v.push_back(rr);
		}
		ll add = 0;
		for(ll i=0;i<v.size();i++)
		{
			add += v[i];
		}
		
		if(add/k)
		{
			ll m1 = *max_element(v.begin(),v.end());
			cout<<m1<<endl;
		}
		else
		{
			ll m1 = *min_element(v.begin(),v.end());
			cout<<m1<<endl;
		}
	}
}


