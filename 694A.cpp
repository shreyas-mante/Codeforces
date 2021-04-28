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
		ll n,x;
		cin>>n>>x;
		vector<ll>v(n,0);
		
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		
		ll sum = 0;
		for(ll i=0;i<n;i++)
		{
			sum += v[i];
		}
		ll ans = 0;
		if(sum%x != 0)
		{
			ans = sum/x;
			ans++;
		}
		else
		{
			ans = sum/x;
		}
		ll max = 0;
		for(ll i=0;i<n;i++)
		{
			if(v[i]%x == 0)
			{
				max += v[i]/x;
			}
			else
			{
				ll a = v[i]/x;
				a++;
				max += a;
			}
		}
		
		cout<<ans<<" "<<max<<endl;
	}
}

