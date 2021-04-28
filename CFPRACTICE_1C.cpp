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
		string s;
		cin>>s;
		
		if(s.size() > 10)
		{
			string ans;
			ans = ans + s[0];
			int res = s.size() - 2;
			string a = to_string(res); 
			ans = ans + a;
			ans = ans + s[s.size()-1];
			cout<<ans<<endl;
		}
		else
		{
			cout<<s<<endl;
		}
	}
}


