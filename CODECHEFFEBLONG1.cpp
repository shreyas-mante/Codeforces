#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define nuke_google ll t; cin>>t; for(ll i_1=1;i_1<=t;i_1++)
#define imbackkk ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


signed main()
{
	imbackkk;
//	nuke
//	{
		ll n;
		cin>>n;
		vector<ll>v;
		for(ll i=1;i<=n;i++)	
		{
			if((n%i) == 0 && ((n/i)>=1 && (n/i)<=10))
			{
				v.push_back(n/i);
			}
			
		}
		sort(v.begin(),v.end(),greater<ll>());
		cout<<v[0]<<endl;
//	}
}


