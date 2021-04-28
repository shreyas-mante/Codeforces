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
		
		ll i = n-1;
		ll sum1 = 0;
		ll sum2 = 0;
		sort(arr,arr+n);
		while(i>=0)
		{
			if(sum1 < sum2)
			{
				sum1 += arr[i];
			}
			else
			{
				sum2+= arr[i];
			}
			i--;
		}
		
		if(sum1 == sum2)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
	}	
}

