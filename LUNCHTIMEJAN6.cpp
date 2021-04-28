#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imbackkk ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


signed main()
{
	
	imbackkk;
	nuke
	{
		ll n,k;
		cin>>n>>k;
		ll arr[n];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		ll c = 0;
		for(ll i=0;i<n;i++)
		{
			if(arr[i]%k != 0)
			{
				ll a = arr[i];
				arr[i] ^= k;
				if(arr[i]%k == 0)
				{
					c++;
				}
			}
			else
			{
				c++;
			}
		}
		
		if(c == n)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
	}
}


