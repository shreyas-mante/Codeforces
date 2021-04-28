#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


bool finding(ll n1)
{
	string s = to_string(n1);
	
	
	for(ll i=0;i<s.size();i++)
	{
		if(s[i] != '0' && n1%(s[i] - '0') != 0)
		{
			return false;
		}
	}
	return true;
	
}

signed main()
{
	imback;
	nuke
	{
		ll n;
		cin>>n;
		
		for(ll i=n;i<=pow(MOD,2);i++)
		{
			if(finding(i))
			{
				cout<<i<<" ";
				break;
			}
		}
		cout<<endl;
	}
}

