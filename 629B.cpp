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
		ll a,b;
		cin>>a>>b;
		string s;
		for(ll i=0;i<a-2;i++)
		{
			s = s + 'a';
		}
		
		s = s + "bb";
		
		do
		{
			b--;
			if(b == 0)
			{
				cout<<s<<endl;
				break;
			}
		}while(next_permutation(s.begin(),s.end()));
	}
}


