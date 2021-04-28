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
		ll c = 0;
		for(ll i=0;i<n;i++)
		{
			sum += v[i];
			if(sum >= x && sum <=y)
			{
				c++;
			}
		}
		
		if(sum < x)
		{
			cout<<"-1";
		}
		else if(c > 0)
		{
			cout<<"0"<<endl;
		}
		else if(sum > y)
		{	
			ll b = 0;
			ll max = *max_element(v.begin(),v.end());
			ll min = *min_element(v.begin(),v.end());
			ll mxi = 0 , mini = 0;
			for(ll i=0;i<n;i++)
			{
				if(max == v[i])
				{
					mxi = i;
				}
			}
			
			for(ll i=0;i<n;i++)
			{
				if(min == v[i])
				{
					mini = i;
				}
			}
			
			swap(v[mxi] , v[mini]);
			ll sum = 0;
			ll a = 0;
			for(ll i=0;i<n-1;i++)
			{
				sum += v[i];
				if(sum >= x && sum <= y)
				{
					b = 1;
					break;
				}
			}
			
			if(b == 0)
			{
				cout<<"-1"<<endl;
			}
			else
			{
				cout<<"1"<<endl;
			}
		}
	}
}

