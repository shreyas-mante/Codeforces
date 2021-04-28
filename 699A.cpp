#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define bb ll t; cin>>t; while(t--)



signed main()
{

	bb
	{
		ll x,y;
		cin>>x>>y;
		string s;
		cin>>s;
		map<char,ll>mp;
		
		for(ll i=0;i<s.size();i++)
		{
			mp[s[i]]++;
		}
		
		char y1 = y < 0 ? 'D' : 'U';
		char x1 = x < 0 ? 'L' : 'R';
		
		if(mp[x1] >= abs(x) && mp[y1] >= abs(y))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}


