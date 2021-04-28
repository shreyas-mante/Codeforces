#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int const N = 1e6;
vector<ll>fb(N+10,0);

signed main()
{
	imback;
	fb[1] = 1;
	fb[2] = 2;
	for(ll i=3;i<=N;i++)
	{
		fb[i] = (fb[i-1] + fb[i-2])%MOD;
	}
	nuke
	{
		ll n;
		cin>>n;
		cout<<fb[n]%MOD<<endl;
	}
}


