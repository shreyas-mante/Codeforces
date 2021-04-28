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
		ll n,k;
		ll fg = 0 , y = 0;
		cin>>n>>k;
		ll arr[n];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i] > k)
				y=1;
		}
		if(y==0)
		{
			cout<<"YES";
			goto nx;
		}	
		for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<n;j++)
			{
				if(arr[i]+arr[j]<=k && i!=j)
					fg=1;
			}
		}
		if(fg==1)
		{
			cout<<"YES";	
		}	
		else
		{
			cout<<"NO";
		}
		
		nx :	
		cout<<"\n";	
	}
}


