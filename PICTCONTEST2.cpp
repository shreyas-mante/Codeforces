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
		ll n,k;
		cin>>n>>k;
		
		ll arr[n];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];	
		}	
		
		if(n == k)
		{
			for(ll i=0;i<n;i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
		else
		{
			ll p = 1;
			for(ll i=0;i<(n/k)/2;i++)
			{
//				if(i%n)
//				{
//					sort(arr,arr+n);
//					p = p+2;
//				}
				reverse(arr+p*k , arr+(1+p)*k);
				p = p+2;
			}
			
			for(ll i=0;i<n;i++)
			{
				if(i!=0 && i%k==0)
				{
					i = i + (k-1);
				}
				cout<<arr[i]<<" ";
			}
			
			cout<<endl;
		}
//	}
}


