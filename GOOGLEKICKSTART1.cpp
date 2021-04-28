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
	nuke_google
	{
		ll n,b;
		cin>>n>>b;
		vector<ll>v(n,0);
		
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		
		sort(v.begin(),v.end());
		ll cnt = 0;
		ll sum = 0;
		for(ll i=0;i<n;i++)
		{
			sum += v[i];
			if(sum <= b)
			{
				cnt++;
			}
		}
		
		cout<<"Case #"<<i_1<<": "<<cnt<<endl;
	}
}


