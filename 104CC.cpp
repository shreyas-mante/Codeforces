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
		if(n%2 == 1)
		{
			for(ll i=n;i>=1;i--)
			{
				for(ll j=1;j<i;j++)
				{
					if(j<=(n/2))
					{
						cout<<"1"<<" ";
					}
					else
					{
						cout<<"-1"<<" ";	
					}
					
				}
			}
		}
		else
		{
			ll ans = n - ((n-1)/2);
			for(ll i=n;i>=1;i--)
			{
				for(ll j=1;j<i;j++)
				{
					if(j<=((n-1)/2))
					{
						cout<<"-1"<<" ";
					}
					else if(j >=ans)
					{
						cout<<"1"<<" ";
					}
					else
					{
						cout<<"0"<<" ";
					}
				}
				
			}
		}
		
		cout<<endl;
	}
}


