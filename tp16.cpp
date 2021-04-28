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
		ll n;
		cin>>n;
		ll arr[n];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		ll k;
		cin>>k;
		
		ll m = 0;
		ll mx = 0;
    	for(ll i=0;i<=k;i++)
		{	
        	mx = INT_MIN;
        	for (ll j=0;j<n-k-1;j++)
			{
	            for (ll p=i;p<=i+j;p++) 
				{
	                mx = max(mx , arr[p + 1] - arr[p]);
	            }
        	}
       
        	m = max(m, mx);
    	}
		cout<<m+1<<endl;
//	}/
}


