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
		
		ll sum = v[0]; // using dp prefix sum - mkc
		ll b = 0;
		for(ll i=1;i<n;i++)
		{
			sum += v[i];
			if(sum >=x && sum <=y)
			{
				cout<<"0"<<endl;
				b = 1;
				break;
			}
		}
		
		if(b == 0)
		{
			
			ll sum = 0;
			for(ll i=0;i<n;i++)
			{
				sum += v[i];
			}
			
			bool dp[n+1][sum+1];
			memset(dp, 0, sizeof(dp)); 
			for(ll i=0;i<=n;i++)
			{
				dp[i][0] = true;
			}
			
			for(ll i=1;i<=n;i++)
			{
				dp[i][v[i-1]] = true;
				for(ll j=1;j<=sum;j++)
				{
					if(dp[i-1][j] == true)
					{
						dp[i][j] = true;
						dp[i][j + v[i-1]] = true; 
					}
				}
			}
			
			set<ll>s;
			for(ll i=0;i<=sum;i++)
			{
				if(dp[n][i] == true)
				{
					s.insert(i);
				}
			}
			ll q = 0;
			for(auto i:s)
			{
				if(i >= x && i <= y)
				{
//					cout<<"1"<<endl;
					q = 1;
					break;
				}
			}
			
			if(q == 0)
			{
				cout<<"-1"<<endl;
			}
			else
			{
				ll ans = v[0];
				ll c = 0;
				for(ll i=2;i<n;i++)
				{
					ll a = ans + v[i];
					if(a >=x && a <= y)
					{
						c = 1;
//						cout<<"1"<<endl;
						break;
					}
				}
				
				ans = v[1];
				ll d = 0;
				for(ll i=2;i<n;i++)
				{
					ll a = ans + v[i];
					if(a >=x && a <= y)
					{
						d = 1;
//						cout<<"1"<<endl;
						break;
					}
				}
				
				if(d!=0 || c!=0)
				{
					cout<<"1"<<endl;
				}
				else
				{
					
					cout<<"2"<<endl;
				}
			}
		}
	}
}

