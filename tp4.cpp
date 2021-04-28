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
		ll arr[5] = {5,4,3,2,1};
		ll n = 5;
		for(ll i=0;i<n/2;i++)
		{
			swap(arr[i] , arr[n-i-1]);
		}
		
		for(ll i=0;i<n;i++)
		{
			cout<<arr[i];
		}
	}
}

