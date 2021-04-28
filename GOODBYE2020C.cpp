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
		map<char,ll>mp;
		map<char,ll>::iterator it;
		
		for(ll i=0;i<s.size();i++)
		{
			mp[s[i]]++;
		}
		ll ans = 0;
		ll b = 1;
		for(it=mp.begin();it!=mp.end();it++)
		{
			if(it->second == 1)
			{
				cout<<"0"<<endl;
				b = 0;
				break;
			}
			else
			{
				ans = max(ans , it->second);
			}
		}
		
		if(b == 1)
		{
			cout<<floor(ans/2)<<endl;
		}
		
	}
}

