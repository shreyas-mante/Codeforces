#include<bits/stdc++.h>
using namespace std;
#define ll long long int



int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		string s , b;
		cin>>s;
		cin>>b;
		map<char,ll>mp;
		
		for(ll i=0;i<s.size();i++)
		{
			mp[s[i]]++;
		}
		for(ll i=0;i<b.size();i++)
		{
			mp[b[i]]++;
		}
		
		if(mp.size() == 1)
		{
			for(auto x:mp)
			{
				cout<<x.second<<endl;
			}
		}
		else
		{
			
		}
	}
}


