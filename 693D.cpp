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
		
		sort(arr,arr+n);
		
		ll a = 0 ;
		ll b = 0;
		bool b1 = true;
		for(ll i=0;i<n;i++)
		{
			if(arr[i] %2 == 0 && b1==true)
			{
				a = a + arr[i];
				b1!=b1;
			}
			else
			{
				b = b + arr[i];
				b1!=b1;
			}	
		}
		
		if(a == b)
		{
			cout<<"Tie"<<endl;	
		}		
		else if(a > b)
		{
			cout<<"Alice"<<endl;
		}
		else
		{
			cout<<"Bob"<<endl;
		}
	}
}

