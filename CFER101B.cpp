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
		ll n;
		cin>>n;
		ll arr[n];
		
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		ll w1 = -100000;
		ll r1 = -100000;
		ll m;
		cin>>m;
		ll arr1[m];
		for(ll i=0;i<m;i++)
		{
			cin>>arr1[i];
		}
		
		
		ll p0 = 0;
		ll q0 = 0;
		for(ll i=0;i<n;i++)
		{
			p0 = p0 + arr[i];
			if(p0 > r1)
			{
				r1 = p0;
			}
		}
		
		for(ll i=0;i<m;i++)
		{
			q0 = q0 + arr1[i];
			if(q0 > w1)
			{
				w1 = q0;
			}
		}
		
		if(r1 > 0 && w1 > 0)
		{
			cout<<r1+w1<<endl;
		}
		else if(r1<0 && w1<0)
		{
			cout<<"0"<<endl;
		}
		else
		{
			cout<<max(r1,w1)<<endl;
		}
		
		
		
		
		
	}
}

