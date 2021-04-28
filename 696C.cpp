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
		n = n*2;
		vector<ll>v(n,0);
		
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		
		sort(v.begin(),v.end());
		ll sum = 0;
		ll ans = 0;
		for(ll i=0;i<n-2;i++)
		{
			ans = v[n-1] + v[i];
			for(ll j=0;j<n-2;j++)
			{
				if(v[i]+v[j] == ans)
				{
					cout<<"YES"<<endl;
					cout<<v[i]<<" "<<v[j]<<endl;
					ans = max(v[i],v[j]);
				}
			}
		}
		
		
	}
}


