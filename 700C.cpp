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
		ll n;
		cin>>n;
		ll arr[n];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		set<ll>s;
		for(ll i=0;i<n;i++)
		{
			s.insert(arr[i]);
		}
		
		if(s.size() == n)
		{
			cout<<s.size()<<endl;
		}
		else
		{
			vector<ll>v1,v2;
			for(ll i=0;i<n-1;i++)
			{
				if(arr[i] != arr[i+1])
				{
					v1.push_back(arr[i]);
				}
				else
				{
					v2.push_back(arr[i]);
				}
			}
			
			v1.push_back(arr[n-1]);
			
			ll cnt=0;
			for(ll i=0;i<v1.size();i++)
			{
				if( v1[i]!=v1[i-1] )
					cnt++;
			}
			for(ll i=0;i<v2.size();i++)
			{
				if( v2[i]!=v2[i-1] )
					cnt++;
			}
			
			cout<<cnt<<endl;	
		}
	}
}


