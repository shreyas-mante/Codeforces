#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


bool isprime(ll n)
{
	ll i; 
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	} 
		return true;
}

signed main()
{
	imback;
	nuke
	{
		ll n,m,k;
		cin>>n>>m>>k;
		
		if(isprime(k))
		{
			cout<<"-1"<<endl;
		}
		else
		{
			
		}
		
	}
}


