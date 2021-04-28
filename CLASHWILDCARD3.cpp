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
		ll n,k,b;
		cin>>n>>k>>b;
		vector<ll>v(n,0);
		
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		vector<ll>indx;
		vector<ll>::iterator it;
		ll p = k;
		ll sum = 0;
		while(k--)
		{
			ll ans = *max_element(v.begin(),v.end());
			if(ans == 0)
			{
				break;
			}
			it = find(v.begin(),v.end() , ans);
			ll ind = it - v.begin();
			ll a   = v[ind] - ceil(v[ind]/3);
			v[ind] = a;
			sum += ceil(v[ind]/3);
			indx.push_back(ind+1);
		}
		
		if(k < 0)
		{
			cout<<sum<<" "<<p<<endl;
			for(ll i=0;i<indx.size();i++)
			{
				cout<<indx[i]<<" ";
			}
			cout<<endl;
		}
		else
		{
			cout<<sum<<" "<<p<<endl;
			for(ll i=0;i<indx.size();i++)
			{
				cout<<indx[i]<<" ";
			}
			cout<<endl;
		}
	}
}


