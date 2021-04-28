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
		
		map<ll,ll>mp;
		
		for(ll i=0;i<n;i++)
		{
			mp[arr[i]]++;
		}
		
		if(mp.size() == 1)
		{
			if(n%2 == 0)
			{
				cout<<"NO"<<endl;
			}
			else
			{
				cout<<"YES"<<endl;
			}
		}
		else
		{
			ll add = 0;
			for(ll i=0;i<n;i++)
			{
				add = add + arr[i];
			}
			ll b = 1;
			
			if(add % 2 != 0)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				for(ll i=0;i<n;i++)
				{
					for(ll j=0;j<n;j++)
					{
						if(i == j)
						{
							continue;
						}
						else
						{
							ll ans = add;
							ans = ans - arr[i];
							ans = ans + arr[j];
							
							if(ans %2 != 0)
							{
								cout<<"YES"<<endl;
								b = 0;
								goto a;
							}
						}
					}
				}
				a:
				if(b == 1)
				{
					cout<<"NO"<<endl;
				}
			}
			
		}
	}
	
}


