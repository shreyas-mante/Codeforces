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
		ll n,x,y;
		cin>>n>>x>>y;
		vector<ll>v(n,0);
		
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		
		sort(v.begin(),v.end());
		ll sum = 0;
		ll i = 0;
		ll b = 0;
		while(i!=v.size()-1)
		{
			sum += v[i];
			i++;
			if(sum >=x && sum <= y)
			{
				cout<<"0"<<endl;
				b = 1;
				break;	
			}
		}
		
		if(b == 0)
		{
			sum = 0;
			for(ll i=0;i<n;i++)
			{
				sum += v[i]; 
			}
		}
		
			
		
		
	}
}

