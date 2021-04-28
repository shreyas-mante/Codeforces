#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


signed main()
{
	imback;
	nuke
	{
		ll n;
		cin>>n;
		vector<ll>v(n,0);
		set<ll>s;
		
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		
		for(ll i=0;i<n;i++)
		{
			if(s.find(v[i]) == s.end())
			{
				s.insert(v[i]);
			}
			else
			{
				s.insert(v[i]+1);
			}
		}
		
		cout<<s.size()<<endl;
	}
}

