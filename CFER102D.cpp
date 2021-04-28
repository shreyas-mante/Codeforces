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
		ll n,k;
		cin>>n>>k;
		string s1;
		cin>>s1;
		
		while(k--)
		{
			ll l , r;
			ll x = 0;
			cin>>l>>r;
			unordered_set<ll>s;
			string news = s1.substr(0 , l-2);
			string new1 = s1.substr(r,s1.size()-1);
			string snew = news+new1;
//			cout<<snew<<endl;
			for(ll i=0;i<snew.size();i++)
			{
				if(snew[i] == '-')
				{
					x--;
					s.insert(x);
				}
				else
				{
					x++;
					s.insert(x);
				}
			}
			cout<<s.size()<<endl;
		}
	}
}


