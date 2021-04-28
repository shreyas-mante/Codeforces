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
		map<char,ll>mp;
		set<char>ans;
		
		if(s.size() == 1)
		{
			cout<<s<<endl;
		}
		else
		{
			for(ll i=0;i<s.size();)
			{
				if(s[i] == s[i+1])
				{
					i+=2;
					continue;
				}
				else
				{
					ans.insert(s[i]);
					i++;
				}
				
				if(i == s.size()-1)
				{
					ans.insert(s[s.size()-1]);	
				}
			}
			
			
			string res;
			
			for(auto x:ans)
			{
				res = res + x;
			}
			
			cout<<res<<endl;
		}
		
		
	}
}


