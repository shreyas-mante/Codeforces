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
		vector<ll>v(n,0);
		
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		
		ll sum = 0;
		for(auto x:v)
		{
			sum+= x;
		}
		
		if(sum == 0)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
			if(sum > 0)
			{
				sort(v.begin(),v.end(),greater<ll>());
			}
			else
			{
				sort(v.begin(),v.end());
			}
			for(auto x:v)
			{
				cout<<x<<" ";
			}
			cout<<endl;
		}
	}
}

