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
		ll c = 0;
		for(ll i=0;i<n-1;i++)
		{
			if(arr[i] <= arr[i+1])
			{
				c++;
			}
		}
		
		if(c == n-1)
		{
			for(ll i=n-1;i>=0;i--)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
			continue;
		}
		else
		{
			if(n%2 == 0)
			{
	//			vector<ll>v;
				for(ll i=n-1;i>=1;i=i-2)
				{
					cout<<arr[i-1]<<" "<<arr[i]<<" ";
				}
				cout<<endl;
			}
			else
			{
				for(ll i=1;i<n;i++)
				{
					cout<<arr[i]<<" ";
				}
				cout<<arr[0];
				cout<<endl;
			}
		}
		
		
	}
}


