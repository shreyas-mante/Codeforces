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
		vector<ll>v(n,0);
		
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		set<ll>s;
		for(ll i=0;i<n;i++)
		{
			s.insert(v[i]);
		}
		ll c = 0;
		for(auto x:s)
		{
			if(x <= k)
			{
				c++;
			}
		}
		
		if(c == s.size())
		{
			cout<<"YES"<<endl;
		}
		else
		{
			ll b = 0;
			for(ll i=0;i<n;i++)
			{
				for(ll j=0;j<n;j++)
				{
					if(i == j)
					{
						continue;
					}
					
					if(v[i] + v[j] <= k)
					{
						b = 1;
						break;
					}
				}
				
				if(b == 1)
				{
					break;
				}
			}
			
			
			if(b == 0)
			{
				cout<<"NO"<<endl;
			}
			else
			{
				cout<<"YES"<<endl;
			}
			
		}
	}
}


