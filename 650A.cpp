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
		string s;
		cin>>s;
		string ans = "";
		
		for(ll i=0;i<s.size();i+=2)
		{
			ans = ans + s[i];
		}
		
		cout<<ans+s[s.size()-1]<<endl;
		
	}
}

