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
		ll n,m,k;
		cin>>n>>m>>k;
		ll c = 1;
		while(n%2 == 0)
		{
			n = n/2;
			c = c * 2;
			
		}
		while(m%2 == 0)
		{
			m = m /2;
			c = c * 2;
		}
		
		if(c >= k)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}

