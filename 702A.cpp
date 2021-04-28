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
		ll arr[n];
		
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		ll mx = 0;
		ll tmp = 0;
		for(ll i=0;i<n-1;i++)
		{
			ll ans1 = max(arr[i],arr[i+1]);
			ll ans2 = min(arr[i],arr[i+1]);
			if(ans1/ans2 > 2)
			{
				tmp = min(ans1,ans2);
				mx = max(ans1,ans2);
			}
		}
		
//		ll tmp = mn;
		ll tmp1 = 1;
		ll c = 0;
		while(tmp1*2<mx)
		{
			tmp = tmp1;
			c++;
		}
		cout<<c<<endl;
	}
	
}


