#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int mod = 1000000007;
int solve(int n)
{
	if(n-- == 1)
	{
		return 12;
	}
	
	long ho = 6;
	long he = 6;
	while(n --> 0)
	{
		long s1 = ho;
		long s2 = he;
		
		ho = 3*s1 + 2*s2;
		ho %= mod;
		he = 2*s1 + 2*s2;
		he %= mod;
	}
	
	long res = ho+he;
	res %= mod;
	return (int)res;
}

signed main()
{
	imback;
//	nuke
//	{
		cout<<solve(2);
//	}
}


