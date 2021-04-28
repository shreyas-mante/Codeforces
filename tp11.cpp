#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


ll myreverse(ll arr[] , ll n,ll i) 
{
	
	if(n == 1 || n == 0)
	{
		return 0;
	}
	swap(arr[n-1] , arr[i]);
	return myreverse(arr+1 , n-2 , i);
}

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
		ll i = 0;
		myreverse(arr,n,i);
		for(ll i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
//	}

}


