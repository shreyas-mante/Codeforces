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
		ll n,k;
		cin>>n>>k;
		ll arr[n];
		
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		ll c = 0;
		if(arr[0] >= k-1 && arr[n-1] >= k-1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			for(ll i=1;i<n-1;i++)
			{
				if((arr[i]+k-1) <= arr[i])
				{
					c++;
				}
			}
			if(c == n-2)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
	}
	
}

