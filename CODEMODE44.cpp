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
		vector<ll>arr(n,0),v(n,0);
		
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		ll ns = 0;
		for(ll i=0;i<n;i++)
		{
			arr[i] = v[i];
		}
		for(ll i=0;i<n;i++)
		{
			ll a = arr[i];
			ll c = 0;
			for(ll j=0;j<n-1;j++)
			{
				arr[j] = arr[j] - a;
				arr[j+1] = arr[j+1] - (a+1);
				a = arr[j+1];
				c++;
				ll ans = count(arr.begin(),arr.end(),0);
				if(ans == n)
				{
					ns = min(ns , c);
				}
			}
			for(ll k=0;k<n;k++)
			{
				arr[k] = v[k];
			}
		}
		
		if(ns == 0)
		{
			cout<<n<<endl;
		}
		else
		{
			cout<<min(ns,n)<<endl;
		}
//	}
}


