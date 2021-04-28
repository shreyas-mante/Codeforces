#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imbackkk ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


signed main()
{
	imbackkk;
	nuke
	{
		ll n;
		cin>>n;
		vector<ll>v(n);
		map<ll,ll>mp;
		
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		
		for(ll i=0;i<n;i++)
		{
			mp[v[i]]++;
		}
		
		sort(v.begin(),v.end());
		if(mp.size() == 1)
		{
			cout<<"0"<<endl;
		}
		else
		{	
			ll a1 = abs(v[0] - v[1]);
			ll a2 = abs(v[1] - v[n-1]);
			ll a3 = abs(v[n-1]-v[0]); 
			cout<<a1+a2+a3<<endl;
		}
		
	}
}


