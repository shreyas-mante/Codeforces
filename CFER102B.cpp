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
		string s,d;
		cin>>s;
		cin>>d;
		ll a = s.size();
		ll b = d.size();
		ll gc = __gcd(a,b);
		ll lc = (a*b)/gc;
		
		ll a1 = lc / s.size();
		ll b1 = lc / d.size();
		
		string ans = "";
		
		while(a1--)
		{
			ans = ans + s;
		}
		
		string ans1 = "";
		
		while(b1--)
		{
			ans1 = ans1 + d;
		}
		if(ans == ans1)
		{
			cout<<ans<<endl;
		}
		else
		{
			cout<<"-1"<<endl;
		}
		
	}
}


