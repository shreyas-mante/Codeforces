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
		cin>>n>>k;
		ll arr[n];
		
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		ll p[n];
		p[0] = ar[0];
		for(ll i=1;i<n;i++)
		{
			p[i] = p[i-1] + ar[i];	
		}	
		ll c =0;
		for(ll i=1;i<n;i++)
		{
			p[i-1] += c;
			if(ar[i]*100 > k*p[i-1])
			{
				ll tc = (ar[i]*100 - k*p[i-1])/k;
				
				if( (ar[i]*100 - k*p[i-1] ) % k)
				{
					tc++;
				}
				c+=tc;
			}
		}
		
		cout<<c<<endl;
	}
}


