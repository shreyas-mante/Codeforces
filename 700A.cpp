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
		
		for(ll i=0;i<s.size();i++)
		{
			ll ans = s[i];
			if(ans>= 97 && ans<=121 && i+1&2 != 0)
			{
				cout<<char(++ans);
			}
			else
			{
				ll ans = s[i];
				if(ans>=99 && ans<=122)
				{
					ans = ans -2;
					cout<<char(ans);
				}
				else if(ans == 97)
				{
					cout<<"y";
				}
				else if(ans == 98)
				{
					cout<<"z";
				}
				
			}
			
		}
		cout<<endl;
	}
}


