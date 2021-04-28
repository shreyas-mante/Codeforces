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
		ll n,x;
		cin>>n>>x;
		vector<ll>v(n,0);
		
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		
		ll sum = 0;
		
		for(ll i=0;i<n;i++)
		{
			if((v[i]&1) != 0)
			{
				if(x == 0)
				{
					break;
				}
				x--;
				sum += v[i];
			}
		}
		
		if((sum&1) != 0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}

	}
}


