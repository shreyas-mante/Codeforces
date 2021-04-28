#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


signed main()
{
	imback;
//	nuke
//	{
		ll n,m;
		cin>>n>>m;
		vector<ll>vec1(n,0);
		vector<ll>vec2(m,0);
		
		for(ll i=0;i<n;i++)
		{
			cin>>vec1[i];
		}
		for(ll i=0;i<m;i++)
		{
			cin>>vec2[i];
		}
		sort(vec1.begin(),vec1.end());
		sort(vec2.begin(),vec2.end());
		ll cnt = 0;
		
		for(ll i=0;i<m;i++)
		{
			if(vec2[i] < vec1[0])
			{
				cnt = cnt + n;
			}
		}
		
		cout<<cnt<<endl;
//	}
}

