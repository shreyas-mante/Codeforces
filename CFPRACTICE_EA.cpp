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
		ll arr[n];
		ll max = INT_MIN;
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		ll ans = 0;
		ll c = 0;
		for(ll i=0;i<n;i++)
		{
			if(arr[i] == 0)
			{
				ans++;
			}
			else
			{
				ans--;
				c++;
			}
			if(ans > max)
			{
				max = ans;
			}
			
			if(ans < 0)
			{
				ans = 0;
			}
			
			
		}
		
		cout<<max+c<<endl;
//	}
}


