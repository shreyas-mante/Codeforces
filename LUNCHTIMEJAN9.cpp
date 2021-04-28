#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imbackkk ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


signed main()
{
	
	imbackkk;
	nuke
	{
		ll n;
		cin>>n;
		string s;
		cin>>s;
		vector<ll>b1(n+2,0);
		vector<ll>b0(n+2,0);
		s = '-'+s;
		for(ll i=1;i<=n;i++)
		{
			b1[i] = b1[i-1];
			b0[i] = b0[i-1];
			
			if(s[i] == '1')
			{
				b1[i]++;
			}
			else
			{
				b0[i]++;
			}
		}
		
		ll rr = min(n - b0[n] , n - b1[n]);
		vector<ll>ss(n+2,0);
		for(ll i=n;i>=1;i--)
		{
			ss[i] = ss[i+1];
			if(s[i] == '1')
			{
				ss[i]++;
			}
			rr = min(rr , n - (ss[i] + b0[i-1]));
		}
		
		cout<<rr<<endl;
		
	}
}


