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
		ll n;
		cin>>n;
		string s;
		cin>>s;
		reverse(s.begin(),s.end());
		ll cnt = 0;
		for(ll i=0;i<s.size();i++)
		{
			if(s[i] == ')')
			{
				cnt++;
			}
			else
			{
				break;
			}
		}
		
		if(cnt > n/2)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}

