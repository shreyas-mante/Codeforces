#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



signed main()
{
	imback
	nuke
	{
		ll n;
		cin>>n;
		ll arr[n];
		
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		ll at = n*(n-1)/2;
		ll add = 0;
		
		for(ll i=0;i<n;i++)
		{
			add += arr[i];
		}
		
		if(add < at)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			ll b = 0;
			ll c = 1;
			for(ll i=0;i<n;i++)
			{
				if(arr[i] + b >=i)
				{
					b = (arr[i] + b) - i;
				}
				else
				{
					cout<<"NO"<<endl;
					c = 0;
					break;
				}
			}
			
			if(c == 1)
			{
				cout<<"YES"<<endl;
			}
		}
		
		
	}
}


