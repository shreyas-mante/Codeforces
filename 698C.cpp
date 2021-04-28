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
		ll a = n;
		n = 2*n;
		ll arr[n];
		
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		sort(arr,arr+n ,greater<ll>());
		ll prv = 0 , p = 0;
		set<ll>s;
		ll ans = 0;
		for(ll i=0;i<n;i+=2)
		{
			
			if(arr[i] == arr[i+1])
			{
				if((arr[i] - prv)%(a*2-p) == 0)
				{
					ans = arr[i] / (a*2-p);
					if(ans > 0)
					{
						s.insert(ans);	
					}
				}
				
			}
			p = p +2;
			prv = prv + 2*ans;
			
		}
		
		if(s.size() == a)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}


