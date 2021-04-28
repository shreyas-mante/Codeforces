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
		ll arr[4];
		
		for(ll i=0;i<4;i++)
		{
			cin>>arr[i];
		}
		
		
	
			sort(arr,arr+4);
			cout<<arr[0]*arr[2]<<endl;
		
	}
}

