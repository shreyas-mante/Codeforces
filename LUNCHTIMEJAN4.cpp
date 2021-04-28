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
		ll n;
		ll k;
		cin>>n>>k;
		ll arr[n];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		ll cnt = 0;
		ll fg = 0;
		ll f = 0;
		for(ll i=0;i<n;i++)
		{
			if(arr[i] != -1)
			{
				cnt++;
				
				if(arr[i] > k)
				{
					fg = 1;
				}
				
				if(arr[i] <= 1)
				{
					f++;
				}
			}
		}
		ll p = 0;
		if(cnt < ceil(n / 2.0))
		{
			cout<<"Rejected"<<endl;
			p = 1;
			continue;
		}
		
		
		if(fg)
		{
			cout<<"Too Slow"<<endl;
			p = 1;
			continue;
		}
		
		if(f == n)
		{
			cout<<"Bot"<<endl;
			p = 1;
			continue;
		}
		
		if(p == 0)
		{
			cout<<"Accepted"<<endl;
		}
	}
}


