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
		ll a,b;
		ll b1 = 0;
		cin>>a>>b;
		ll x , y , p , q;
		while(a--)
		{
			cin>>x>>y>>p>>q;
			if(y == p)
			{
				b1 = 1;
			}
		}
		
		if(b1 && b%2 == 0)
		{
			cout<<"YES"<<endl;	
		}		
		else
		{
			cout<<"NO"<<endl;
		}
	}
}


