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
		map<ll,ll>mp;
		set<ll>s;
		vector<ll>v;
		for(ll i=1;i<=100000;i++)
		{
			s.insert(i*i*i);
			v.push_back(i*i*i);
		}
		ll b = 1;
		for(ll i=0;i<v.size();i++)
		{
			if(s.find(n - v[i]) != s.end())
			{
				cout<<"YES"<<endl;
				b = 0;
				break;
			}
		}
		
		if(b == 1)
		{
			cout<<"NO"<<endl;
		}
//		for(auto x:s)
//		{
//			cout<<x<<endl;
//		}
	}
}


