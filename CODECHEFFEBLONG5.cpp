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
		ll n;
		cin>>n;
		map<string , vector<char>> mp;
		map<char,ll>mp2;
		for(ll i=0;i<n;i++)
		{
			string s;
			cin>>s;
			mp[s.substr(1)].push_back(s[0]);
//			mp2[s[0]]++;
		}
		map<char , ll>mp1;
		for(auto x:mp)
		{
			for(ll i=0;i<x.second.size();i++)
			{
				mp1[x.second[i]]++;
			}
		}
//		if(mp2.size() == 1)
//		{
//			cout<<"0"<<endl;
//		}
//		else
//		{
			ll ans = 0;
//			ll tmp = 0;
			for(auto x:mp)
			{
//				tmp = 0;
				for(auto y:mp)
				{
					if(x.first != y.first)
					{
						set<char>smp(x.second.begin(),x.second.end());
//						for(ll i=0;i<x.second.size();i++)
//						{
//							smp.insert(x.second[i]);
//						}
						ll tmp = 0;
						for(auto z:y.second)
						{
							if(smp.find(z) != smp.end())
							{
								tmp++;
							}
						}
						ans += (x.second.size() - tmp) * (y.second.size() - tmp);
						
					}
				}
			}
			
			cout<<ans<<endl;
		
			
//		}
		
	}
}


