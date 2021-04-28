#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


bool dpres(vector<ll> &v , ll n , ll k)
{
	
	ll add = 0;
		for(ll i=0;i<n;i++)
		{
			add+= v[i];
		}
		
		if(add < (k*(1<<1)))
		{
			return false;
		}
		
	
		bool dp[add / 2 + 1][n+1];
		for(ll i=1;i<=add/2;i++)
		{
			dp[i][0] = false;
		}
		for(ll i=0;i<=n;i++)
		{
			dp[0][i] = true;
		}
		
		for(ll i=1;i<=add/2;i++)
		{
			for(ll j=1;j<=n;j++)
			{
				dp[i][j] = dp[i][j-1];
				if(i >= v[j-1])
				{
					dp[i][j] = dp[i][j] || dp[i-v[j-1]][j-1];
				}
			}
		}
		
		for(ll i=add/2;i>=k;i--)
		{
			if(dp[i][n])
			{
				return true;
			}
		}
		
		return false;	
	
}


signed main()
{
	imback;
	nuke
	{
		ll n,k;
		cin>>n>>k;
		vector<ll>v(n,0);
		
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		ll add = 0;
		for(ll i=0;i<n;i++)
		{
			add+=v[i];
		}
		
		if(n == 1 || add < (k*(1<<1)))
		{
			cout<<"-1"<<endl;
		}
		else
		{
			sort(v.begin(),v.end(),greater<ll>());
			if(v[0] >=k && v[1] >=k)
			{
				cout<<"2"<<endl;
			}
			else
			{
				ll b = 0;
				for(ll i=1;i<=n;i++)
				{
					if(dpres(v,i,k) == true)
					{
						b = 1;
						cout<<i<<endl;
						break;	
					}
				}
				
				if(b == 0)
				{
					cout<<"-1"<<endl;
				}
			}
			
		}
	}
}

