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
		ll x = 0,y = 0;
		string s;
		cin>>s;
		
		for(ll i=0;i<s.size();i++)
		{
			switch(s[i])
			{
				case 'L':
					{
						x = x-1;
						break;	
					}
					
					case 'R':
					{
						x = x+1;
						break;	
					}
					case 'U':
					{
						y = y +1;
						break;	
					}
					case 'D':
					{
						y = y -1;
						break;	
					}
			}
		}
		
		cout<<x<<" "<<y<<endl;
	}
}

