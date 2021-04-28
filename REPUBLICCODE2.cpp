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
		string s;
		cin>>s;
		string snew = "";
		for(ll i=0;i<s.size();i++)
		{
			if(s[i] == 'a' || s[i] == 'e'|| s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
			{
				snew = snew + s[i];
			}
		}
		
		sort(snew.begin(),snew.end());
		
		for(ll i=0;i<s.size();i++)
		{
			if(s[i] == 'a' || s[i] == 'e'|| s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
			{
				continue;
			}
			else
			{
				snew = snew + s[i];
			}
		}
		
		cout<<snew<<endl;
	}
}


