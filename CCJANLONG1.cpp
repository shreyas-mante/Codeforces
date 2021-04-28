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
		ll n,m;
		cin>>n>>m;
		
		vector<ll>john(n,0);
		vector<ll>jack(m,0);
		
		for(ll i=0;i<n;i++)
		{
			cin>>john[i];
		}
		
		for(ll i=0;i<m;i++)
		{
			cin>>jack[i];
		}
		ll jhsum = 0;
		ll jksum = 0;
		for(ll i=0;i<john.size();i++)
		{
			jhsum += john[i];
		}
		
		for(ll i=0;i<jack.size();i++)
		{
			jksum += jack[i];
		}
		
		
		sort(john.begin(),john.end());
		sort(jack.begin(),jack.end(),greater<ll>());
		ll c = 0 , i = 0 , j = 0;
		while(jhsum <= jksum && i<n && j<m)
		{
			if(john[i] >= jack[j])
			{
				break;
			}
			jhsum = jhsum - john[i] + jack[j];
			jksum = jksum - jack[j] + john[i];
			i++;
			j++;
			c++;
		}
		
		if(jhsum > jksum)
		{
			cout<<c<<endl;
		}
		else
		{
			cout<<"-1"<<endl;
		}
	}
}

