#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define nuke ll t; cin>>t; while(t--)
#define imback ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


signed main()
{
	imback;
	vector<ll>out;
	vector<ll>vec;
	nuke
	{
		ll ans;
		cin>>ans;
		if(ans == 1)
		{
			ll inp;
			cin>>inp;
			vec.push_back(inp);
		}
		else if(ans == 2)
		{
			for(ll i=0;i<vec.size();i++)
			{
				if(vec[i] > 0)
				{
					out.push_back(i+1);
					vec[i] = -1;
					break;
				}
			}
		}
		else
		{
			ll mx = *max_element(vec.begin(),vec.end()) - vec.begin();
			out.push_back(mx+1);
		}
	}
	
	for(ll i=0;i<out.size();i++)
	{
		cout<<out[i]<<" ";
	}
	cout<<endl;
}

