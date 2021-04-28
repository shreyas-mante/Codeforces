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
		ll cnt = 0;
		for(ll i=0;i<n;i++)
		{
			if(i%2==0 && arr[i]%2==0)
			{
				cnt++;
			}
		}
		
		cout<<abs(n-cnt)<<endl;
	}
}

