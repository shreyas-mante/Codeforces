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
		string s1;
		cin>>s1;
		
		ll c = 0;
		reverse(s1.begin(),s1.end());
		
		for(ll i=0;i<n;i++)
		{
			if(s1[i] == ')')
			{
				c++;
			}
			else
			{
				break;
			}
		}
		
		if(c > abs(s1.size()-c))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
	}
}

