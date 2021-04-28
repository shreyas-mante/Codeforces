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
		ll n,q;
		cin>>n>>q;
		ll arr[n];
		
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}	
		
		ll ones = 0;
		ll zero = 0;
		
		for(ll i=0;i<n;i++)
		{
			if(arr[i] == 0)
			{
				zero++;
			}
			else
			{
				ones++;
			}
		}
		
		while(q--)
		{
			ll x,y;
			cin>>x>>y;
			if(x == 1)
			{
				if(arr[y-1] == 1)
				{
					arr[y-1] = 0;
					zero++;
					ones--;
				}
				else
				{
					arr[y-1] = 1;
					zero--;
					ones++;
				}
//				cout<<arr[y-1]<<endl;
			}
			else
			{
				if(y <= ones)
				{
					cout<<"1"<<endl;
				}
				else
				{
					cout<<"0"<<endl;
				}
			}
		}
		
//	}
}


