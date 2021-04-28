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
			if(i%2 == 0)
			{
				if(s[i] == 'a')
				{
					cout<<"b";
				}
				else
				{
					cout<<"a";
				}
			}
			else
			{
				if(s[i] == 'z')
				{
					cout<<"y";
				}
				else
				{
					cout<<"z";
				}
			}
		}
		
		cout<<endl;
			
	}
}


